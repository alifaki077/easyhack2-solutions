#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string pat;
    cin >> pat >> n;
    int len = pat.length();

    string word;
    while(n--){
        cin >> word;
        if(word.length() != len) continue;
        bool flag = true;
        for(int i=0; i < len; i++){
            if(pat[i] != 'X' && pat[i] != word[i])
                flag = false;
        }
        if(flag)
            cout << word << " ";
    }
    return 0;
}

