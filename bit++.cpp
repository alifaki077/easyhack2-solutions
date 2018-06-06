#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x = 0;
    cin >> n;
    char op;
    while(n--){
        cin >> op;
        if(op == '+'){
            x++;
        }else{
            x--;
        }
    }
    cout << x;
    return 0;
}

