//
//

#include <iostream>
using namespace std;

struct student {
    char fname[40];
    char sname[40];
    char tname[40];
    int ev[6];
};

int main() {
    student s;
    int n;
    cin >> n;
    int m1=1;
    int m2=1;
    int mi1=6;
    int mi2=6;
    for (int i=1;i<=n;i++) {
        cin >> s.fname;
        cin >> s.sname;
        cin >> s.tname;
        float aves=0;
        for (int j=0;j<6;j++) {
            cin >> s.ev[j];
            aves+=s.ev[j];}
            aves/=6;
            if (aves>m1) m1=aves;
            else if (aves>m2) m1=aves;
            if (aves<mi1) mi1=aves;
            else if (aves<mi2) mi1=aves;
        cout<< "средний балл:" << aves << "\n";

    }
    if (m1==6 || m2==6) {
        m1=0;
        m2=0;
    }
    if (mi1==1 || mi2==1) {
        mi1=0;
        mi2=0;
    }
    cout << m1 << "\n" << m2 << "\n" << mi1 << "\n" << mi2 << "\n";
}

