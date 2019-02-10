close all
clear all
%%test_case_idx
%1 for liptracking2
%2 for liptracking3
%３ for liptracking3

ifSave = false;
for test_case_idx = 1:3
    close all;
    trackLip(test_case_idx,ifSave);
end