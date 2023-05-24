#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ii = pair<int,int>;

int n,m; 
int dp[1005][1005];
int a[1005][1005];
bool flag[1005][1005];

int solve(){
    queue<ii> q;
    q.push({1,1});
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if(x == n && y == m) return dp[x][y];
        if(x <= n && y+a[x][y] <= m && !flag[x][y+a[x][y]]){
            dp[x][y+a[x][y]] = dp[x][y] + 1;
            q.push({x,y+a[x][y]});
            flag[x][y+a[x][y]] = true;
        }
        if(x +a[x][y] <= n && y <= m && !flag[x+a[x][y]][y]){
            dp[x+a[x][y]][y] = dp[x][y] + 1;
            q.push({x+a[x][y],y});
            flag[x+a[x][y]][y] = true;
        }
    }
    return -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        memset(dp,0,sizeof(dp));
        memset(flag,0,sizeof(flag));
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        cout << solve() << endl;
    }
    return 0;
}