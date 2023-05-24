#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool flag[1005];

void DFS(vector<int> v[] , int u){
    flag[u] = true;
    cout << u << ' ';
    for(int x : v[u]){
        if(!flag[x]){
            DFS(v,x);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        vector<int> v[1005];
        memset(flag,false,sizeof(flag));
        int n,m,u; cin >> n >> m >> u;
        for(int i = 0; i < m; i++){
            int a,b; cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        DFS(v,u);
        cout << endl;
    }
    return 0;
}