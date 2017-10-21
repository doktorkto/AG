// Author: Eva Kharitontseva-Beglova
// Check for parity

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        int number_for_check;
        scanf("%d", &number_for_check);
        if (number_for_check % 2 == 0) printf("%d: Even\n", number_for_check);
        else printf("%d: Odd\n", number_for_check);
    }
}
