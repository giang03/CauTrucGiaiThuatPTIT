#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

ll f[100005];

ll solve(int n, int k){
    f[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= min(k,i); j++){
            f[i] += f[i - j];
            f[i] %= MOD;
        }
    }
    return f[n];
}

int main(){
    int t; cin >> t;
    while(t--){
        memset(f,0,sizeof(f));
        int n,k; cin >> n >> k;
        cout << solve(n,k) << endl;
    }
    return 0;
}