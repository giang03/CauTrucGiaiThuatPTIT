#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n,m,s;
bool flag[1005];

void BFS(vector<int> v[],int u){
    queue<int>q;
    flag[u] = true;
    q.push(u);
    while(!q.empty()){
        int x = q.front(); q.pop();
        cout << x << " ";
        for(int i : v[x]){
            if(!flag[i]){
                q.push(i);
                flag[i] = true;
            }
        }
    }
}

int main(){
    int t; cin >> t; 
    while(t--){
        memset(flag,false,sizeof(flag));
        vector<int> v[1005];
        cin >> n >> m >> s;
        for(int i = 0 ; i < m; i++){
            int x,y; cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        BFS(v,s);
        cout << endl;
    }
}