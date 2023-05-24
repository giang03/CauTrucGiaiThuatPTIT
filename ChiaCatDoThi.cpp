#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool visited[1005];

void DFS(vector <int> v[] ,int s){
    visited[s] = true;
    for(int x : v[s]){
        if(!visited[x]){
            DFS(v,x);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        vector <int> v[1005];
        memset(visited,false,sizeof(visited));
        int n,m; cin >> n >> m;
        for(int i = 0; i < m; i++){
            int x,y; cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        int cnt = 0, res = 0, ans = 0;
        for(int i = 1 ;i <= n; i++){
            if(!visited[i]){
                res++;
                DFS(v,i);
            }
        }
        for(int i = 1; i <= n; i++){
            memset(visited,false,sizeof(visited));
            cnt = 0;
            visited[i] = true;
            for(int j = 1; j <= n; j++){
                if(!visited[j]){
                    cnt++;
                    DFS(v,j);
                }
            }
            if(cnt > res){
                res = cnt;
                ans = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}