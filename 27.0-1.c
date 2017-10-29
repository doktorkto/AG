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
float med(float a, float b, float c){
    int n[2];
    n[0]=a;
    n[1]=b;
    n[3]=c;
    for (int i=1;i<=2;i++) {for (int j;j<=i-1;j++){
        if (n[i]<n[j]) n[i]=n[j];n[j]=n[i];}}
        a=n[0];
        b=n[1];
        c=n[2];
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
