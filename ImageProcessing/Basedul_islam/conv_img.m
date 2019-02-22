function [out_img]=conv_img(mask, input_img)

L = mask;
img = input_img;
total=sum(L(:));
mask=(1/total)*L;

[r,c]=size(img);
out_img=img;

summ=0;

for i=2:(r-1)
    for j = 2:(c-1)
        summ = 0;
        s=1;
        t=1;
        for m=(i-1):(i+1)
            for n=(j-1):(j+1)
                summ=summ+double((img(m,n))*mask(s,t));
                t=t+1;
            end
            t=1;
            s=s+1;
        end
        
    out_img(i,j)=uint8(summ);
    end
end