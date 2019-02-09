%close all;
clear all;

param.alpha = 3; % (3)
param.beta = 2; % (3)
param.omega = 12;
param.eta = 10;



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
one_row(1:5) = 2*(param.alpha * [0, -1, 2, -1, 0] + param.beta * [1, -4, 6, -4, 1]);
A = [];
for i = 1:pt_num
    A = [A; circshift(one_row, [0, i-3])];
end

A0 = A * double(curv); % Initial coefficient of templete

a = 1;

for i = 1302:1910
    str = ['liptracking2/liptracking2_0',num2str(i),'.jpg'];
    img = imread(str);
    [BW,maskedRGBImage] = createMask(img);

    BW = conv2(double(BW),gs);
    BW(BW<0.75) = 0;
    curv = getElps(BW,pt_num);
    
    tx = curv(:,1);
    ty = curv(:,2);
    %displaySnakeOnImage(tx,ty,BW);
    
    origin = img;
    img = rgb2gray(img);
    img = conv2(double(img),gs);
    A0 = A * double(curv); % Initial coefficient of templete
    curv = mySnake(img, A, A0, param,curv);
    %curv = mySnake_mex(img, A, A0, curv, omega, eta);
    
    tx = curv(:,1);
    ty = curv(:,2);
    
    figure(1)
    displaySnakeOnImage(tx,ty,origin);
%    saveas(gcf,['outputs\lt2_' num2str(i) '.png']);

    a = 1;
    pause(0.001)
end