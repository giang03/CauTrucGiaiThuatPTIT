#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;


void solve(int a[], int n, int k){
    ll tmp = 0, res = 0;
    if(k * 2 <= n){
        for(int i = 0; i < n; i++){
            if(i < k){
                tmp += a[i];
            }
            else res += a[i];
        }
    }
    else{
        for(int i = 0; i < n; i++){
            if(i < n - k){
                tmp += a[i];
            }
            else res += a[i];
        }
    }
    cout << res - tmp << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a, a+ n);
        solve(a,n, k);
    }
    return 0;
}
