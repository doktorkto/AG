// find d in (a ^ b) mod c = d
#include <stdio.h>
int check(long long a){return a >= 1e8 ? 1e8 : a;}
int get_power(int base, int exponent){
    printf("%d %d\n", base, exponent);
    if (exponent == 0) return 1;
    if (exponent == 1) return base;
    if (exponent % 2 == 0) return get_power(check((long long) base * base), exponent / 2);
    else return check(get_power(base, exponent - 1) * (long long)base);
}

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d", get_power(a, b) % c);
    return 0;
}
