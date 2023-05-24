#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n,m, check;
bool flag[1005];

void Haminton(vector<int> v[],int u, int count){
    if(count == n) {
        check = 1;
        return;
    }
    for(int i = 0; i < v[u].size(); i++){
        int x = v[u][i];
        if(flag[x]){
            flag[x] = 0;
            Haminton(v,x,count+1);
            flag[x] = 1;
        }
    }
}

int main(){
    int t; cin >> t; 
    while(t--){
        vector <int> v[1005];
        memset(flag,1,sizeof(flag));
        cin >> n >> m;
        check = 0;
        for(int i = 0; i < m; i++){
            int x,y; cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        for(int i = 1; i <= n; i++){
            Haminton(v,i,1);
        }
        cout << check << endl;
    }
}