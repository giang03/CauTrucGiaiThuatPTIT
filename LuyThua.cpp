#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

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
        int n, k; cin >> n >> k;
        cout << pow_Mod(n,k) << endl;
    }
    return 0;
}