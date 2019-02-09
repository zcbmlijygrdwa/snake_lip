function pts = getElps(BW,pt_num,params)
points = [];
for i = 1:size(BW,1)
    for j = 1:size(BW,2)
        if(BW(i,j)>0)
            points=[points;[j,i]];
        end
    end
end


ellipse_t = fit_ellipse( points(:,1),points(:,2) );

rot = rotmat2d(-ellipse_t.phi);

%expand
kk = params.elpk;
l_clps = params.l_clps;
ellipse_t.long_axis = ellipse_t.long_axis*kk*l_clps;
ellipse_t.short_axis = ellipse_t.short_axis*kk;
ellipse_t.a = ellipse_t.a*kk*l_clps;
ellipse_t.b = ellipse_t.b*kk;

pts = [];
sampleSize = (ellipse_t.long_axis*2)/(pt_num);

for x = -0.5*ellipse_t.long_axis:sampleSize:0
    y = real(ellipse_t.b*sqrt(1-(x)^2/((ellipse_t.a)^2)));
    pts = [pts;[x,y]];
    pts = [pts;[x,-y]];
    pts = [pts;[-x,y]];
    pts = [pts;[-x,-y]];
end

pts = pts(1:pt_num,:);

pts = rot*pts';
pts = pts';
pts(:,1) = pts(:,1) + ellipse_t.X0_in;
pts(:,2) = pts(:,2) + ellipse_t.Y0_in;

pts = int32(pts);