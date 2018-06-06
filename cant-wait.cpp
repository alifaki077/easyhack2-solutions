#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int res = (n * (n - 1)) / 2;
        cout << res * k << "\n";
    }
    return 0;
}

