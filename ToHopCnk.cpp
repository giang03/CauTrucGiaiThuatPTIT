#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;
ll a[1005][1005];

void tohop(){
    for(int i = 1; i <= 1001; i++){
        for(int j = 1; j <= 1001; j++){
            if(i == j) a[i][j] = 1;
            else if(j == 1) a[i][j] = i;
            else a[i][j] = a[i-1][j-1] + a[i-1][j];
            a[i][j] %= MOD;
        }
    }
}

int main(){
    tohop();
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        cout << a[n][k] << endl;
    }
    return 0;
}
