%close all;
clear all;

params = paramManager(2);
%1 for liptracking2
%2 for liptracking3

load('template2.mat');
i = 1;
[xx,yy] = snakeinterp(x(i,:),y(i,:),2,0.5);

curv = int16([xx,yy]);
pt_num = size(curv,1);

pt_num = 50;

gs = my_gaussian_kernel(10,50);

gs1 = my_gaussian_kernel(5,5);

img = imread([params.directory '/' params.directory '_0',num2str(params.startFrame),'.jpg']);



[BW,maskedRGBImage] = createMask(img,params);


BW = conv2(double(BW),gs);
BW(BW<0.85) = 0;
imshow(maskedRGBImage)
curv = getElps(BW,pt_num,params);

origin = img;
img = rgb2gray(img);
img = conv2(double(img),gs);
% Prepare coefficient matrices A
one_row = zeros(1, pt_num);
one_row(1:5) = 2*(params.alpha * [0, -1, 2, -1, 0] + params.beta * [1, -4, 6, -4, 1]);
A = [];
for i = 1:pt_num
    A = [A; circshift(one_row, [0, i-3])];
end

for i = params.startFrame:params.endFrame
    str = [params.directory '/' params.directory '_0',num2str(i),'.jpg'];
    img = imread(str);
    

    [BW,maskedRGBImage] = createMask(img,params);

    BW = conv2(double(BW),gs);
    BW(BW<params.intensity_thres) = 0;
    curv = getElps(BW,pt_num,params);
    
    tx = curv(:,1);
    ty = curv(:,2);
    %displaySnakeOnImage(tx,ty,BW);
    
    origin = img;
    img = rgb2gray(img);
    img = conv2(double(img),gs);
    A0 = A * double(curv); % Initial coefficient of templete
    curv = mySnake(img, A, A0, params,curv);
    %curv = mySnake_mex(img, A, A0, curv, omega, eta);
    
    tx = curv(:,1);
    ty = curv(:,2);
    
    figure(1)
    visualizeSnake(tx,ty,origin);
%    saveas(gcf,['outputs\lt2_' num2str(i) '.png']);

    a = 1;
    pause(0.001)
end