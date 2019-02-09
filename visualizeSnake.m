function visualizeSnake(tx,ty,img,BW)

%figure,
imshow(img,[]);
hold on

K = convhull(double(tx),double(ty));
plot(tx(K),ty(K),'b-',tx,ty,'b.','MarkerSize',5)

%?????????, don't try this....
%plot(tx(K),ty(K),'k-',tx,ty,'k*','MarkerSize',15)

end