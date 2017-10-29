//pow
//Eva Kharitontseva-Beglova

#include <stdio.h>

int pow_(int e, int f)
{
    int c;
    c=e;
    int s;
    s=1;
    while(f>1)
    {
        if (f%2==0)
        {
            e=e*e;
            f=f/2;
        }
        else
        {
            s=s*e;
            f-=1;
        }
    }
    e=e*s;
    return e;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",pow_(a,b));
}
