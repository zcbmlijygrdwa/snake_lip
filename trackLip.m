function trackLip(test_case_idx,ifSave)

params = paramManager(test_case_idx);
%1 for liptracking2
%2 for liptracking3
%３ for liptracking3

if(test_case_idx==1)
    load('template2.mat');
elseif(test_case_idx==2)
    load('template3.mat');
else
    load('template4.mat');
end

pt_num = 20;

gs = my_gaussian_kernel(10,50);

gs1 = my_gaussian_kernel(5,5);
if(test_case_idx==3)
    img = imread([params.directory '/' params.directory '_00',num2str(params.startFrame),'.jpg']);
    
else
    img = imread([params.directory '/' params.directory '_0',num2str(params.startFrame),'.jpg']);
    
end


[BW,maskedRGBImage] = createMask(img,params);




BW = conv2(double(BW),gs);
BW(BW<params.intensity_thres) = 0;
% imshow(maskedRGBImage)
% return
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
    if(test_case_idx==3)
        str = [params.directory '/' params.directory '_00',num2str(i),'.jpg'];
    else
        str = [params.directory '/' params.directory '_0',num2str(i),'.jpg'];
    end
    disp(str) 
    img = imread(str);
    
    
    [BW,maskedRGBImage] = createMask(img,params);
    
    BW = conv2(double(BW),gs);
    BW(BW<params.intensity_thres) = 0;
    curv = getElps(BW,pt_num,params);
    if(length(curv)==0)
       continue; 
    end
    tx = curv(:,1);
    ty = curv(:,2);
    
    origin = img;
    img = rgb2gray(img);
    img = conv2(double(img),gs);
    A0 = A * double(curv); % Initial coefficient of templete
    curv = mySnake(img, A, A0, params,curv);

    tx = curv(:,1);
    ty = curv(:,2);
    
    figure(1)
    visualizeSnake(tx,ty,origin,BW);
    if(ifSave)
    saveas(gcf,['outputs\case_' num2str(test_case_idx+1) '\lt_' num2str(test_case_idx+1) '_' num2str(i) '.png']);
    end
    pause(0.001)
end