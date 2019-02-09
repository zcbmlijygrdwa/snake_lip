function visualizeSnake(tx,ty,img)

%figure,
imshow(img,[]);
hold on
%snakedisp(tx,ty,'g-')
K = convhull(double(tx),double(ty));
%plot(tx(K),ty(K),'g-',tx,ty,'g*')


%?????????, don't try this....
plot(tx(K),ty(K),'k-',tx,ty,'k*','MarkerSize',15)



end