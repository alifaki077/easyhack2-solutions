#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;

    for(int i=0; i < n; i++){
        for(int j=0; j <= i; j++){
            cout << s[j];
        }
        cout << "\n";
    }
    return 0;
}

