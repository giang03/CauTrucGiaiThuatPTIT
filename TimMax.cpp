#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;


void solve(int a[], int n){
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += a[i] * i;
        ans %= MOD;
    }
    cout << ans << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a, a+ n);
        solve(a,n);
    }
    return 0;
}
