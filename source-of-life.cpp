#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        double w, a; cin >> w >> a;
        int v; cin >> v;
        double act[4] = {0, 0.25, 0.5, 1};
        if(a >= (round(w / 30) + round(w / 30) * act[v - 1])){
            cout << "Good, You're drinking enough water!";
        }else{
            cout << "Bad, You aren't drinking enough water!";
        }
        cout << "\n";
    }
    return 0;
}

