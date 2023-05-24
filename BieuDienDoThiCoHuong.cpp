#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n,m;

int main(){
    int t; cin >> t; 
    while(t--){
        vector<int> v[1005];
        cin >> n >> m;
        for(int i = 0 ; i < m; i++){
            int x,y; cin >> x >> y;
            v[x].push_back(y);
        }
        for(int i = 1; i <= n; i++){
            cout << i << ": ";
            for(int x : v[i]){
                cout << x << " ";
            }
            cout << endl;
        }
    }
}