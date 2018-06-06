#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    bool bulb[25];
    memset(bulb, false, sizeof bulb);

    while(t--){
        int e, o; cin >> e >> o;
        for(int i=e; i < o; i++) bulb[i] = true;
    }
    int c = 0;
    for(int i=0; i < 25; i++){
        if(bulb[i]) c++;
    }
    cout << c;
    return 0;
}

