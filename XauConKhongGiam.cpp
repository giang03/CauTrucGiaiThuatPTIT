#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;


int main(){
    string s; cin >> s;
    int n = s.size();
    int dp[n];
    for(int i = 0; i < n; i++) dp[i] = 1;
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < i; j++){
            if(s[i] >= s[j]) dp[i] = max(dp[i],dp[j] + 1);
        }
    }
    cout << *max_element(dp,dp+n);
    return 0;
}