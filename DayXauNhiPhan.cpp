#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

ll n,k; 
ll f[100];
void fibo(){
    f[1] = f[2] = 1;
    for(int i = 3; i < 93; i++){
        f[i] = f[i-1] + f[i-2];
    }
}

int solve(ll n, ll k){
    if(n == 1) return 0;
    if(n == 2) return 1;
    if(k > f[n-2]){
        return solve(n - 1,k - f[n-2]);
    }
    return solve(n-2,k);
}

int main(){
    fibo();
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        cout << solve(n,k) << endl ;
    }
    return 0;
}