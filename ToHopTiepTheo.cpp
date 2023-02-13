#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n, k, a[1005];
bool flag[1005];

void sinh(){
    int i = k; 
    while(i >= 1 && a[i] == n - k + i) i--;
    if(i == 0) return;
    else {
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j-1] + 1;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        memset(flag, false, sizeof(flag));
        cin >> n >> k;
        for(int i =  1; i <= k; i++){
            cin >> a[i];
            flag[a[i]] = true;
        }
        sinh();
        int cnt = 0;
        for(int i = 1; i <= k; i++){
            if(!flag[a[i]]) cnt++;
        }
        if(cnt != 0) cout << cnt << endl;
        else cout << k << endl;
    }
    return 0;
}
