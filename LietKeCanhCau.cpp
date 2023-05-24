#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n,m;
int parent[1005], num[1005];
bool flag[1005];

void init(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        num[i] = 1;
    }
}

int Find(int u){
    if(parent[u] != u){
        parent[u] = Find(parent[u]);
    }
    return parent[u];
}

void Union(int x, int y){
    int u = Find(x), v = Find(y);
    if(u == v) return;
    if(num[u] < num[v]){
        swap(u,v);
    }
    num[u] += num[v];
    parent[v] = u;
}

int main(){
    int t; cin >> t; 
    while(t--){
        memset(flag,false,sizeof(flag));
        memset(num,0,sizeof(num));
        cin >> n >> m;
        init();
        for(int i = 0 ; i < m; i++){
            int x,y; cin >> x >> y;
            Union(x,y);
        }
        for(int i = 1; i <= n; i++){
            if(i != parent[i]){
                cout << i << ' ';
            }
        }
    }
}