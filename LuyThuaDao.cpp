#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int MOD = 1e9 + 7;

ll powmod(ll n, ll k){
    if(k == 1) return n%MOD;
    ll tmp = powmod(n,k/2);
    if(k%2 == 0) return (tmp*tmp%MOD);
    return (tmp*tmp%MOD) * n %MOD;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        string s = to_string(n);
        reverse(s.begin(),s.end());
        cout << powmod(n,stoll(s)) << endl;
    }
    return 0;
}