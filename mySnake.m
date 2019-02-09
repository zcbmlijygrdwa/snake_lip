function [ curve_locs ] = mySnake( img, A, init_A, param,curve_locs)
omega = param.omega;
eta = param.eta;

%convert to double
img = double(img);
point_indexs = 1:size(curve_locs, 1);
%set threshold to end iteration
threshold = 0.1;
for i = point_indexs
    prog = i*1.0/length(point_indexs)
    c_old = curve_locs;
    
    for proposed_index = point_indexs
        original_index = setdiff(point_indexs, proposed_index); 
        temp = sub2ind([size(img,1), size(img,2)], curve_locs(:,2), curve_locs(:,1));
        %construct B matrix
        B = [init_A(:,1) + omega * (img(temp + size(img,1)) - img(temp)) + 2 * eta * (img(temp + size(img,1)) - 2*img(temp) + img(temp - size(img,1))), init_A(:,2) + omega * (img(temp + 1) - img(temp)) + 2 * eta * (img(temp + 1) - 2*img(temp) + img(temp - 1))];
        curve_locs(proposed_index,:) = int32( (B(proposed_index,:) - A(proposed_index,original_index)*double(curve_locs(original_index,:))) / A(proposed_index, proposed_index) );
    end
    
    %displaySnakeOnImage(c(:,1),c(:,2),I);
    if norm(double(curve_locs - c_old)) < threshold
        return;
    end
end
end

