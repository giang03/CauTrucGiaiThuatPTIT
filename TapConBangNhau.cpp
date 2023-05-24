#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n, a[1005],dp[10005];

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        int sum = 0;
        memset(dp,0,sizeof(dp));
        for(int i = 1;i <= n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(sum % 2) cout << "NO\n";
        else {
            sum /= 2;
            dp[0] = 1;
            for(int i = 1; i <= n; i++){
                for(int j = sum; j >= a[i]; j--){
                    if(dp[j - a[i]]) dp[j] = 1;
                }
            }
            if(dp[sum]) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}
