function convertToVideo(test_case_idx)

params = paramManager(test_case_idx);
%1 for liptracking2
%2 for liptracking3
%３ for liptracking3

outputVideo = VideoWriter([test_case_idx.directory,'.avi']);
outputVideo.FrameRate = 24;
open(outputVideo)

for i = params.startFrame:params.endFrame
    prog = i/(params.endFrame-params.startFrame)
    
    img = imread(['outputs\case_' num2str(test_case_idx+1) '\lt_' num2str(test_case_idx+1) '_' num2str(i) '.png']);
    writeVideo(outputVideo,img);
end
close(outputVideo);