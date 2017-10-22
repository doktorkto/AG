//...
#include <stdio.h>
int main ()
{
    int a;
    int b;
    int d=0;
    scanf("%d%d", &a, &b);
    if (b>0) {
    for (int i=0; i<b; i++)
    {
        d+=a;
    };}
    else{
        b=(-1)*b;
            for (int i=0; i<b; i++){
        d+=a;}
        d=(-1)*d;
    }
    printf("%d", d);
    };

