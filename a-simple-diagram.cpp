#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string aa, a, bb, b, cc, c, d, f;

    int g;
    while(n--){
        cin >> g;
        if(g >= 95) aa += "*";
        else if(g >= 90) a += "*";
        else if(g >= 85) bb += "*";
        else if(g >= 80) b += "*";
        else if(g >= 70) cc += "*";
        else if(g >= 60) c += "*";
        else if(g >= 50) d += "*";
        else f += "*";
    }
    cout << "GRADE | STUDENTS\n";
    cout << "   A+ | " << aa << "\n";
    cout << "   A  | " << a << "\n";
    cout << "   B+ | " << bb << "\n";
    cout << "   B  | " << b << "\n";
    cout << "   C+ | " << cc << "\n";
    cout << "   C  | " << c << "\n";
    cout << "   D  | " << d << "\n";
    cout << "   F  | " << f << "\n";
    return 0;
}

