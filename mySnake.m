function [ c ] = mySnake( I, A, A0, c, omega, eta )
%% ECE 281B Homework Assignment #2 Function
% Minimizing ||A*x-b|| to obtain minimium total energy
% This function is compile to C code (MEX-file) to enhance performance
% Created on 04/20/2016 Ready for submission
% Author: Yitian Shao
% =========================================================================
pt_num = size(c, 1); % Number of tracking points
pt_ind = 1:pt_num;
[row_num, col_num] = size(I);
I = double(I);

threshold = 0.1; % Return threshold
for i = pt_ind
    prog = i*1.0/length(pt_ind)
    c_old = c;
    for new_ind = pt_ind
        old_ind = setdiff(pt_ind, new_ind); % Old indices of points       
        c_ind = sub2ind([row_num, col_num], c(:,2), c(:,1)); % Linear index
        
% 'Bx = A*x0 + omega*[I(x+1,y)-I(x,y)] + 2eta*[I(x+1,y)-2I(x,y)+I(x-1,y)]'
        B_x = A0(:,1) + omega * (I(c_ind + row_num) - I(c_ind)) + ...
          2 * eta * (I(c_ind + row_num) - 2*I(c_ind) + I(c_ind - row_num));
% 'By = A*y0 + omega*[I(x,y+1)-I(x,y)] + 2eta*[I(x,y+1)-2I(x,y)+I(x,y-1)]'
        B_y = A0(:,2) + omega * (I(c_ind + 1) - I(c_ind)) + ...
          2 * eta * (I(c_ind + 1) - 2*I(c_ind) + I(c_ind - 1));
        B = [B_x, B_y];
        
        % New indices of points 
        c(new_ind,:) = int16( (B(new_ind,:) - A(new_ind,old_ind)*...
            double(c(old_ind,:))) / A(new_ind, new_ind) );
    end
     %displaySnakeOnImage(c(:,1),c(:,2),I);
    % Return once iteration converges 
    if norm(double(c - c_old)) < threshold
        return;
    end
end

end

