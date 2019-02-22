I = imread('hello.PNG');
subplot(2,2,1);
imshow(I);

G = rgb2gray(I);
subplot(2,2,2);
imshow(G);

zer = ones(4);

out_img=conv_img(zer,G);
subplot(2,2,3);
imshow(out_img);