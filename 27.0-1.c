//min max avg med swap
//Kharitontseva-Beglova Eva

#include <stdio.h>

int main () {
float a[4];
for (int i = 1;i < 4;a[i++] = 0.0f);
for (int i = 1;i <= 3;i++) scanf("%f", &a[i]);
float b;
b=a[1];
for (int i=1;i<=3;i++){
    if (b>a[i]) b=a[i];
}
printf("min = %g", b);
float c;
c=0;
for (int i=1;i<=3;i++){
    if (c<a[i]) c=a[i];}
printf("\nmax = %g", c);
float g;
g=(a[1]+a[2]+a[3])/3;
printf("\navg = %g", g);
float o;
o=0;
for (int i=1;i<=3;i++){
    if (a[i]>b && a[i]<c){
        o=a[i];}
}
printf("\nmed = %g", o);
float t;
printf("\n1 = %g 2 = %g 3 = %g", a[1], a[2], a[3]);
printf("\n1 = %g 2 = %g 3 = %g", a[3], a[1], a[2]);
}
