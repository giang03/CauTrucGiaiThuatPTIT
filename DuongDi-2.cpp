#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n,m,s; 
bool flag[1005];
vector<int> v[1005];

void BFS(int u){
    vector<int> ans[1005];
    queue<int> q;
    q.push(u);
    flag[u] = 0;
    while(!q.empty()){
        int s = q.front(); q.pop();
        for(int x : v[s]){

        }
    }
}

int main(){
    int t; cin >> t; 
    while(t--){
        cin >> n >> m >> s;
        memset(flag,0,sizeof(flag));
        v->clear();
        for(int i = 0; i < m; i++){
            int x,y; cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
    }
}