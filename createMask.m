function [BW,maskedRGBImage] = createMask(RGB,params) 
% Convert RGB image to HSV image
I = rgb2hsv(RGB);
% Define thresholds for 'Hue'. Modify these values to filter out different range of colors.
channel1Min = params.c.min(1);
channel1Max = params.c.max(1);
% Define thresholds for 'Saturation'
channel2Min = params.c.min(2);
channel2Max = params.c.max(2);
% Define thresholds for 'Value'
channel3Min = params.c.min(3);
channel3Max = params.c.max(3);
% Create mask based on chosen histogram thresholds
BW = ( (I(:,:,1) >= channel1Min) & (I(:,:,1) <= channel1Max) ) & ...
    (I(:,:,2) >= channel2Min ) & (I(:,:,2) <= channel2Max) & ...
    (I(:,:,3) >= channel3Min ) & (I(:,:,3) <= channel3Max);
% Initialize output masked image based on input image.
maskedRGBImage = RGB;
% Set background pixels where BW is false to zero.
maskedRGBImage(repmat(~BW,[1 1 3])) = 0.7;

% figure()
% subplot(1,2,1)
% imshow(BW)
% subplot(1,2,2)
% imshow(maskedRGBImage)
