#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int dp[1000005][10];

void check(int n){
    int k = n;
    while(n){
        for(int i = 0; i < 10; i++){
            dp[k][i] = dp[k-1][i];
            if(n%10 == i){
                dp[k][i]++;
            }
        }
        n/=10;
    }
}

int main(){
    dp[0][0] = 1;
    for(int i = 1; i <= 1000000; i++){
        check(i);
    }
    int t; cin >> t;
    while(t--){
        int a,b; cin >> a >> b;
        for(int i = 0; i < 10; i++){
            cout << dp[b][i] - dp[a-1][i] << ' ';
        }
        cout << endl;
    }
	return 0;
}
