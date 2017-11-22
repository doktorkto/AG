#include <stdio.h>
#include <iostream>
using namespace std;
void dig_trench(int m) {
     const unsigned int s1=m;
    const unsigned int s2=m;
    int trench[s1][s2];
    for (int i=0;i<m;i++){
        for (int j=i;j<m;j++){
            if (j==i) trench[i][j]=0;
            else trench[i][j]=trench[i][j-1]+1;
        }
    }
     for (int i=0;i<m;i++){
        for (int j=i;j>=0;j--){
            trench[i][j]=trench[j][i];}}
        for (int i=0;i<m;i++){
                cout <<"\n";
        for (int j=0;j<m;j++){
            cout << trench[i][j]<<" ";
        }
        }
}
int main() {
    int n;
    cin >>n;
    dig_trench(n);
}
