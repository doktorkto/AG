#include <stdio.h>
#include <iostream>
using namespace std;

int dividers(int p){
    int y=1;
    for (int i=2;i*i<=p;i++){
        if (p%i==0) y++;
    }
    return y;
}
int main() {
    int n;
    cin >>n;
    int m=0;
    int m1;
    for (int i=1;i<n;i++){
        if (dividers(i)>m) {
                if (i==1) m=dividers(i);
                else m=dividers(i)*2;
                m1=i;
        }
        }
    cout << m1 << " " << m;
}
