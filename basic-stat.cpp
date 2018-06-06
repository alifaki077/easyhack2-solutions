#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, x; cin >> t;
    while(t--){
        cin >> n;
        int mx = 0, mn = 1000000000;
        while(n--){
            cin >> x;
            mx = max(mx, x);
            mn = min(mn, x);
        }
        cout << mn << " " << mx << " " << mx - mn << "\n";
    }
    return 0;
}

