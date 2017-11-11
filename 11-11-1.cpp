//Eva Haritontseva-Beglova
//Removal recurrent elements

#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin >>n;
    int a[n];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int b[n];
    int b_cnt = 0;
    int r=0;
    for (int i=0; i<n; i++)
    {
        r = 0;
        for (int j=2; j*j<a[i]; j++)
        {
            if (a[i]%j==0) r+=1;
        }
        bool flag = 0;
        if (r==0 && a[i] > 1)
        {
            for (int j=i+1; j<n; j++)
            {
                if (a[i]==a[j])
                {
                    flag = 1;
                    break;
                }
            }
            for (int j = i - 1; j >= 0;j--)
            {
                if (a[i]==a[j])
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(!flag) b[b_cnt++]=a[i];
    }
    for (int i=0; i<b_cnt; i++)
    {
        cout << b[i] << ' ';
    }
}
