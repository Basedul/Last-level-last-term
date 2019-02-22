clear all
close all
x=[1 1];
y=[1, 0, 7];
n=-20:1:10;
imp=[zeros(1,20)|zeros(1,10)];
h=filter(x,y,imp);
subplot(2,1,1);
stem(n,h);
title('Impulse Response')
xlabel('Sample');
ylabel('Amplitude');
stp=[zeros(1,10 | ones(1,20)];
h=filter(x,y,stp);
subplot(2,1,2);
stem(n,h);
title('Stemp Response');