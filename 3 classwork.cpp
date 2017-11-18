#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >>n;
    const unsigned int s1=n;
    const unsigned int s2=n;
    int a[s1][s2];
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            if (j==i) a[i][j]=n;
            else a[i][j]=a[i][j-1]-1;
        }
    }
     for (int i=0;i<n;i++){
        for (int j=i;j>=0;j--){
            a[i][j]=a[j][i];}}
        for (int i=0;i<n;i++){
                cout <<"\n";
        for (int j=0;j<n;j++){
            cout << a[i][j]<<" ";
        }

        }
}
