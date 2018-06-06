#include <bits/stdc++.h>
using namespace std;

int ks(int n , int M , int w[] , int p[]){
    int ar[n+1][M+1];
    memset(ar, 0, sizeof ar);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=M;j++){
            if (w[i-1] <= j)
                ar[i][j] = max(ar[i-1][j] , p[i-1]+ar[i-1][j-w[i-1]]);
            else
                ar[i][j] = ar[i-1][j];
        }
    }
    return ar[n][M];
}

int main ()
{
    int t; cin>>t;
    while (t--){
    int n,M;
    int result;
    cin>>n>>M;
    int w[n] , p[n];
    for (int i=0;i<n;i++)cin>>w[i];
    for (int i=0;i<n;i++)cin>>p[i];
    result = ks(n,M,w,p);
    cout<<result<<endl;
    }
}

