#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 123456789;

ll pow_Mod(ll a, ll b){
    ll tmp = 1;
    while(b){
        if(b % 2 == 1){
            tmp *= a;
            tmp %= MOD;
        }
        a *= a;
        a %= MOD;
        b/=2;
    }
    return tmp;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << pow_Mod(2,n-1) << endl;
    }
    return 0;
}