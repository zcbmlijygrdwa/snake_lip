close all;
clear all;

load('template2.mat');

i = 1;

[xx,yy] = snakeinterp(x(i,:),y(i,:),2,0.5);

img = imread('test.jpg');
img = rgb2gray(img);



%displaySnakeOnImage(xx,yy,img)


%[tx,ty]=snake(img,xx,yy,3,0.0001);
%displaySnakeOnImage(tx,ty,img);

a = 1;

figure()
for i = 1302:1600
    str = ['liptracking2/liptracking2_0',num2str(i),'.jpg'];
    img = imread(str);
    [BW,maskedRGBImage] = createMask(img);
    
    
    subplot(1,2,1)
    imshow(maskedRGBImage)
    subplot(1,2,2)
    imshow(img)
    
%     tt = ones(720,1280,3)*0.22;
%     tt(BW) = RGB(BW);
    
    
    %img = rgb2gray(img);
    [tx,ty]=snake(double(~BW),xx,yy,3,0.0001);
    displaySnakeOnImage(tx,ty,img);
    a = 1;
    pause(0.001)
end