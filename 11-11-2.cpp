//Eva Haritontseva-Beglova
//The number of w

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int w=0;
    string a;
    cin >> a;
    cout << a.size()<<"\n";
    for (int i=0;i<=a.size();i++){
        if (a[i]=='w' || a[i]=='W') w++;
    }
    cout <<w;
}

