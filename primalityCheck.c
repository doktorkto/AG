//Check one number for primality
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    char flag = 0;
    for(int i = 2; i * i <= n; i++){
        if (n % i == 0){ // n multiply i, n - not prime
            flag = 1;
            break;
        }
    }
    if (flag) {
        printf("%d: Composite\n", n);
    }
    else {
        printf("%d: Prime", n);
    }
}
