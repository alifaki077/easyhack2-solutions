#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    int left = 0, right = 0;
    for(auto c:s){
        if(c == '('){
            left++;
        }else if(left > 0){
            left--;
        }else{
            right++;
        }
    }
    cout << left + right;
    return 0;
}

