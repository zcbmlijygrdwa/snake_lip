function params = paramManager(case_index)

switch case_index
    case 1
        params.directory = 'liptracking2';
        params.startFrame = 1302;
        params.endFrame = 1910;
        params.alpha = 3; % (3)
        params.beta = 2; % (3)
        params.omega = 12;
        params.eta = 10;
        params.elpk = 1.6;
        params.l_clps = 0.9;
        params.c.min = [0.7,0.59,0.58];
        params.c.max = [0.999,0.74,0.76];
        
        
        params.intensity_thres = 0.75;
    case 2
        params.directory = 'liptracking3';
        params.startFrame = 1295;
        params.endFrame = 1928;
        params.alpha = 3; % (3)
        params.beta = 2; % (3)
        params.omega = 12;
        params.eta = 10;
        params.elpk = 1.6;
        params.l_clps = 0.9;
        params.c.min = [0.9528,0.36,0.67];
        params.c.max = [0.9967,0.62,0.992];

        params.intensity_thres = 0.75;
        
    case 3
        params.directory = 'liptracking4';
        
end


end