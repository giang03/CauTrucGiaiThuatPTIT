#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        multiset <int> ms;
        for(int i = 0; i < n + m; i++){
            int x; cin >> x;
            ms.insert(x);
        }
        for(int x : ms){
            cout << x << ' ';
        }
        cout << endl;
    }
}