function params = paramManager(case_index)

switch case_index
    case 1
        params.directory = 'liptracking2';
        params.alpha = 3; % (3)
        params.beta = 2; % (3)
        params.omega = 12;
        params.eta = 10;
        params.elpk = 1.6;
        params.l_clps = 0.9;
        params.intensity_thres = 0.75;
    case 2
        params.directory = 'liptracking3';
        
    case 3
        params.directory = 'liptracking4';
        
end


end