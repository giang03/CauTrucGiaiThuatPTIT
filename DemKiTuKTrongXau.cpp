#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

ll n,k;

int solve(ll n, ll k){
    if(k == pow(2,n-1)) return n;
    if(k > pow(2,n-1)) return solve(n-1,k - pow(2,n-1));
    return solve(n - 1,k);
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        cout << char(solve(n,k)+'A' - 1) << endl ;
    }
    return 0;
}