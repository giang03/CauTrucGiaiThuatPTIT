#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int MOD = 1e9 + 7;

int solve(ll a[], int l, int r, ll x){
    int pos = -1;
    while(l <= r){
        int m = (l + r)/2;
        if(a[m] <= x){
            pos = m + 1;
            l = m + 1;
        }
        else r = m - 1;
    }
    return pos;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        ll k; cin >> n >> k;
        ll a[n];
        for(ll &x : a) cin >> x;
        cout << solve(a,0,n-1,k) << endl;
    }
    return 0;
}