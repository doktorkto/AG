#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    double s=0;
    double a[n + 1];
    for (int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=1; i<=n; i++)
    {
        s+=a[i];
    }
    s=s/n;
    printf("%d", s);
    double s1=0.0;
        fprintf(stderr, "krk");
    for (int i=1; 1<=n; i++)
    {
        s1+=(s-a[i])*(s-a[i]);
    }

    s1=sqrt(s1/(n*(n-1)));
    printf("%d", s1);
    s1=sqrt(s1+1);
    printf("%d", s1);
}
