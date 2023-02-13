#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int MOD = 1e9 + 7;
ll fibo[100];
void fibonacci(){
    fibo[1] = fibo[2] = 1;
    for(int i = 3; i < 93; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
}
void solve(ll n, ll k){
    if(n == 1){
        cout << 0 << endl;
        return;
    }
    if(n == 2){
        cout << 1 << endl;
        return;
    }
    if(k <= fibo[n-2]){
        solve(n-2,k);
    }
    else solve(n-1,k - fibo[n-2]);
}

int main(){
    fibonacci();
    int t; cin >> t;
    while(t--){
        ll n,k; cin >> n >> k;
        solve(n,k);
    }
    return 0;
}