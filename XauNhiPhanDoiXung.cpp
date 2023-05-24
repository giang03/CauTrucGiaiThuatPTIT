#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool dp[5005][5005];

int main(){
	string s; cin >> s;
    int q; cin >> q;
    s = " " + s;
    memset(dp,0,sizeof(dp));
    for(int i = 1; i <= s.size(); i++) dp[i][i] = 1;
    for(int len = 2; len <= s.size(); len++){
        for(int i = 1; i <= s.size() - len + 1; i++){
            int j = i + len - 1;
            if(len == 2 && s[i] == s[j]) dp[i][j] = 1;
            else dp[i][j] = (dp[i+1][j-1] && s[i] == s[j]);
        }
    }
    while(q--){
        int l, r; cin >> l >> r;
        if(dp[l][r]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}
