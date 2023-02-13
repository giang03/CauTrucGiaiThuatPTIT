#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n, k, a[1005], x[1005];
int cnt;

bool check(){
    for(int i = 1; i <= k; i++){
        if(a[i] != x[i]) return 0;
    }
    return 1;
}

void Try(int i){
    for(int j = x[i-1] + 1; j <= n - k + i; j++){
        x[i] = j;
        if(i == k){
            cnt++;
            if(check()){
                cout << cnt << endl;
                return;
            }
        }
        else Try(i + 1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cnt = 0;
        cin >> n >> k;
        for(int i = 1; i <= k; i++) cin >> a[i];
        Try(1);
    }
    return 0;
}
