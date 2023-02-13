#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(ll k, ll n){
    if(k == pow(2,n-1)){
        cout << char('A' + n - 1) << endl;
        return;
    }
    if(k <= pow(2,n-1) - 1){
        solve(k,n-1);
    }
    else solve(k - pow(2,n-1), n-1);
}

int main(){
    int t; cin >> t; 
    while(t--){
        ll n,k; cin >> n >> k;
        solve(k,n); 
    }
    return 0;
}