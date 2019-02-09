function visualizeSnake(tx,ty,img,BW)

%figure,
imshow(img,[]);
hold on

K = convhull(double(tx),double(ty));
plot(tx(K),ty(K),'b-',tx,ty,'b*','MarkerSize',15)
%plot(tx(K),ty(K),'b-')

%?????????, don't try this....
%plot(tx(K),ty(K),'k-',tx,ty,'k*','MarkerSize',15)

% 
% points = [];
% for i = 1:size(BW,1)
%     for j = 1:size(BW,2)
%         if(BW(i,j)>0)
%             points=[points;[j,i]];
%         end
%     end
% end
% 
% tx = points(:,1);
% ty = points(:,2);
% 
% K = convhull(double(tx),double(ty));
% plot(tx(K),ty(K),'b-')



end