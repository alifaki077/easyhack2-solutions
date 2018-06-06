#include <bits/stdc++.h>

using namespace std;


int n, m, a, b, x, y;
vector<vector<char>> v;
bool vis[101][101];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

string bfs(int a, int b){

    queue<pair<int, int>> q;
    q.push(make_pair(a, b));

    while(!q.empty()){
        pair<int, int> p = q.front();
        q.pop();
        vis[p.first][p.second] = 1;

        if(p.first == x && p.second == y && v[p.first][p.second] == '*'){
            return "yes";
        }

        for(int k = 0; k < 4; k++){
            int aa = p.first + dx[k];
            int bb = p.second + dy[k];

            if(aa >= 0 && aa < n && bb >= 0 && bb < m){
                if(v[aa][bb] == 'X' || vis[aa][bb]) continue;
                q.push(make_pair(aa, bb));
            }
        }
    }
    return "no";
}

int main(){
    freopen("in", "r", stdin);
    int t; cin >> t;

    while(t--){
        cin >> n >> m;
        v.clear();
        v.resize(n, vector<char>(m, '.'));
        memset(vis, 0, sizeof vis);

        for(int i=0; i < n; i++){
            for(int j=0; j < m; j++){
                cin >> v[i][j];
                if(v[i][j] == 'M'){
                    a = i; b = j;
                }else if(v[i][j] == '*'){
                    x = i; y = j;
                }
            }
        }

        cout << bfs(a, b) << "\n";

    }
    return 0;
}

