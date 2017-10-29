//min max avg med swap
//Kharitontseva-Beglova Eva

#include <stdio.h>

float min(float a, float b, float c){
for (int i=0;i<=2;i++){
    if (a>b)
            if (b<c) return b;
    else return c;
    else return a;}}
float max(float a, float b, float c){
for (int i=0;i<=2;i++){
    if (a<b)
            if (b>c) return b;
    else return c;
    else return a;}
}
float med(float d, float b, float c){
    int a[2];
    a[0]=d;
    a[1]=b;
    a[3]=c;
for(int i = 0 ; i < 2; i++) {
       for(int j = 0 ; j < 2 - i ; j++) {
           if(a[j] > a[j+1]) {
              int tmp = a[j];
              a[j] = a[j+1] ;
              a[j+1] = tmp;
           }
        }
    }
    d=a[0];
    b=a[1];
    c=a[2];
        return b;
    }
void swap(float a, float b, float c){
    float t;
    t=c;
    c=b;
    b=a;
    a=t;
}
float avg(float a, float b, float c){
    float d;
    return (a+b+c)/3.0;

}
int main () {
float d[3];
scanf("%g %g %g", &d[0], &d[1], &d[2]);
printf("min = %g", min(d[0],d[1],d[2]));
printf("\nmax = %g", max(d[0],d[1],d[2]));
printf("\nmed = %g", med(d[0],d[1],d[2]));
printf("\navg = %g", avg(d[0],d[1],d[2]));
}
