#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

ll n,k; 
ll f[100];
ll cnt;
void fibo(){
    f[0] = f[1] = 1;
    for(int i = 2; i < 93; i++){
        f[i] = f[i-1] + f[i-2];
    }
}

int solve(ll n, ll k){
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(k > f[n-2]){
        return solve(n - 1,k - f[n-2]);
    }
    return solve(n-2,k);
}

int main(){
    fibo();
    int t; cin >> t;
    while(t--){
        cnt = 0;
        cin >> n >> k;
        cout << solve(n,k) << endl ;
    }
    return 0;
}