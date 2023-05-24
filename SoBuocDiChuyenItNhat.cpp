#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ii = pair<int,int>;

int n,m;
int a[1005][1005];
int cnt[1005][1005];
bool flag[1005][1005];

int solve(int x, int y){
    queue<ii> q;
    q.push({x,y});
    flag[x][y] = 1;
    while(!q.empty()){
        int i = q.front().first;
        int j = q.front().second;
        q.pop();
        if(i == n && j == m) return cnt[n][m];
        int id = abs(a[i][j] - a[i+1][j]);
        if(i + id >= 1 && i + id <= n && !flag[i + id][j]){
            cnt[i + id][j] = cnt[i][j] + 1;
            flag[i + id][j] = 1;
            q.push({i + id,j});
        }
        id = abs(a[i][j] - a[i][j+1]);
        if(j + id >= 1 && id <= m && !flag[i][j + id]){
            cnt[i][j + id] = cnt[i][j] + 1;
            flag[i][j + id] = 1;
            q.push({i,j + id});
        }
        id = abs(a[i][j] - a[i+1][j+1]);
        if(id >= 1 && id <= n && id <= m && !flag[i + id][j + id]){
            cnt[i + id][j + id] = cnt[i][j] + 1;
            flag[i + id][j + id] = 1;
            q.push({i + id,j + id});
        }
    }
    return -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        memset(flag,0,sizeof(flag));
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        cout << solve(1,1) << endl;
    }
}