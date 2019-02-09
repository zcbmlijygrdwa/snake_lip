function displaySnakeOnImage(tx,ty,img)

%figure,
imshow(img,[]);
hold on
%snakedisp(tx,ty,'g-')
 K = convhull(double(tx),double(ty));
 plot(tx(K),ty(K),'g-',tx,ty,'g*')
end