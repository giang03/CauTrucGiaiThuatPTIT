#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n,m;
int parent[100005];
int num[100005];

void init(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        num[i] = 1;
    }
}

int Find(int u){
    if(u != parent[u]){
        parent[u] = Find(parent[u]);
    }
    return parent[u];
}

void Union(int u, int v){
    int a = Find(u), b = Find(v);
    if(a == b) return;
    if(num[b] > num[a]){
        swap(a,b);
    }
    parent[b] = a;
    num[a] += num[b];
}

int main(){
    int t; cin >> t; 
    while(t--){
        int ans = 0;
        cin >> n>>m;
        init();
        while(m--){
            int x,y; cin >> x>>y;
            Union(x,y);
        }
        for(int i = 1; i <= n; i++){
            ans = max(ans,num[i]);
        }
        cout << ans << endl;
    }
}