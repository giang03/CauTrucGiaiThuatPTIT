#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n,m; 
bool flag[1005][1005];

int BFS(vector<int> v[], int u ,int k){
    queue<int> q;
    q.push(u);
    int cnt[1005] = {0};
    while(!q.empty()){
        for(int x : v[q.front()]){
            if(!flag[q.front()][x]){
                q.push(x);
                cnt[x] = cnt[q.front()] + 1;
                flag[q.front()][x] = 1;
                cout << q.front() << ' ' << x << endl;
                if(x == k) return cnt[x];
            }
        }
        q.pop();
    }
}

int main(){
    int t; cin >> t; 
    while(t--){
        cin >> n >> m;
        memset(flag,0,sizeof(flag));
        vector<int> v[1005];
        for(int i = 0; i < m; i++){
            int x,y; cin >> x >> y;
            v[x].push_back(y);
        }
        cout << BFS(v,1,2) << endl;
        cout << BFS(v,2,1) << endl;
    }
}