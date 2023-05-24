#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

ll powMod(ll n, ll k){
    ll tmp = 1;
    while(k){
        if(k % 2 == 1){
            tmp *= n;
            tmp %= MOD;
        }
        n *= n;
        n%= MOD;
        k/=2;
    }
    return tmp;
}

int main(){
    ll a, b;
    bool ok = 1;
    while(ok){
        cin >> a >> b;
        if(a == 0 && b == 0) ok = 0;
        else cout << powMod(a,b) << endl;
    }
    return 0;
}