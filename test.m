%close all;
clear all;

alpha = 3; % (3)
beta = 2; % (3)
omega = 12;
eta = 10;

load('template2.mat');
i = 1;
[xx,yy] = snakeinterp(x(i,:),y(i,:),2,0.5);

curv = int16([xx,yy]);
pt_num = size(curv,1);

pt_num = 50;

gs = my_gaussian_kernel(10,50);

gs1 = my_gaussian_kernel(5,5);

img = imread('test.jpg');
[BW,maskedRGBImage] = createMask(img);



BW = conv2(double(BW),gs);
BW(BW<0.85) = 0;
curv = getElps(BW,pt_num);

origin = img;
img = rgb2gray(img);
img = conv2(double(img),gs);
% Prepare coefficient matrices A
one_row = zeros(1, pt_num);
one_row(1:5) = 2*(alpha * [0, -1, 2, -1, 0] + beta * [1, -4, 6, -4, 1]);
A = [];
for i = 1:pt_num
    A = [A; circshift(one_row, [0, i-3])];
end


A0 = A * double(curv); % Initial coefficient of templete


%displaySnakeOnImage(xx,yy,img)


%[tx,ty]=snake(img,xx,yy,3,0.0001);
%displaySnakeOnImage(tx,ty,img);

a = 1;

parfor i = 1302:1910
    str = ['liptracking2/liptracking2_0',num2str(i),'.jpg'];
    img = imread(str);
    [BW,maskedRGBImage] = createMask(img);
%     imshow(maskedRGBImage)
%     imshow(maskedRGBImage)
    %     subplot(1,2,1)
    %     imshow(maskedRGBImage)
    %     subplot(1,2,2)
    %     imshow(img)
    
    %     tt = ones(720,1280,3)*0.22;
    %     tt(BW) = RGB(BW);
    
    
    %img = rgb2gray(img);
    %BW = rgb2gray(img);
    %[tx,ty]=snake(double(~BW),xx,yy,3,1);
    
    
    BW = conv2(double(BW),gs);
    BW(BW<0.75) = 0;
    curv = getElps(BW,pt_num);
    
    tx = curv(:,1);
    ty = curv(:,2);
    %displaySnakeOnImage(tx,ty,BW);
    
    origin = img;
    img = rgb2gray(img);
    img = conv2(double(img),gs);
    curv = mySnake(img, A, A0, curv, omega, eta);
    %curv = mySnake_mex(img, A, A0, curv, omega, eta);
    
    tx = curv(:,1);
    ty = curv(:,2);
    
    
    
    figure(1)
    
    %     plot(yy);
    %     hold on;
    
    displaySnakeOnImage(tx,ty,origin);
    saveas(gcf,['outputs\output_' num2str(i) '.png']);
    
    %     yy = ty;
    %     xx = tx;
    
    %     mean_yy = mean(yy);
    %     mean_ty = mean(ty);
    %
    %     mean_xx = mean(xx);
    %     mean_tx = mean(tx);
    %
    %     diff_x = mean_tx -mean_xx;
    %     diff_y = mean_ty -mean_yy;
    %
    %     xx = xx+diff_x;
    %     yy = yy+diff_y;
    
    a = 1;
    pause(0.001)
end