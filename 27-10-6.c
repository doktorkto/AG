//
//

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    int v=0;
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++){
            if (a[i]==a[j]) v++;
        }
    }
    int b[v];
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++){
            if (a[i]==a[j]) b[i]=a[j];
        }
    }
    for (int i=0;i<n;i++) {
        printf("%d ", b[i]);
        }
}
