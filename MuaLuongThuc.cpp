#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n,s,m;

void solve(){
    int x = s - s/7;
    int ans = -1;
    while(n * x >= s * m){
        ans = x;
        x--;
    }
    cout << ans << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> s >> m;
        solve();
    }
    return 0;
}
