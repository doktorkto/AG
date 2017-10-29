//sum of digits which share on 72 or 27
// Kharitontseva-Beglova Eva

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int s=0;
    for (int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for (int i=0;i<n;i++){
        if (a[i]%72==0 || a[i]%27==0) if (a[i]%216!=0) s+=a[i];}
    printf("%d", s);

}
