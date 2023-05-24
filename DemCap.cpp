#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll count(int x, int b[], int m, int dp[]){
	if(x == 0) return 0;
	if(x == 1) return dp[0];
	int* idx = upper_bound(b, b + m, x);
    ll ans = (b + m) - idx;
	ans += dp[0] + dp[1];
	if(x == 2) ans -= (dp[3] + dp[4]);
	if(x == 3) ans += dp[2];
	return ans;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		int a[n], b[m];
		for(int &x : a) cin >> x;
		int dp[5] = {0};
		for(int &x : b){
			cin >> x;
			if(x < 5) dp[x]++;
		}
		sort(b,b+m);
		ll ans = 0;
		for(int x : a){
			ans += count(x,b,m,dp);
		}
		cout << ans << endl;
	}
	return 0;
}
