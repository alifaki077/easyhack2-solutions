#include <bits/stdc++.h>

using namespace std;

int main(){
    int m, s;
    cin >> m >> s;
    double cost;
    if(m > 5 || (m == 5 && s > 0)){
        cost = (m - 5) * 60 + s + 450.0;
    }else{
        cost = (m * 60 + s) * 1.5;
    }
    printf("%.1f", cost);
    return 0;
}

