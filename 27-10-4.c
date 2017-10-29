//min sum of numbers
//Kharitontseva-Beglova Eva

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    int m;
    m=a[0]+a[4];
    for (int i=0;i<=n-5;i++) {
        for (int j=i+5;j<=n;j++){
            if (a[i]+a[j]<m) {
                    m=a[i]+a[j];
                    printf("%d %d\n",a[i], a[j]);}
        }
    }
    printf("%d", m);
}
