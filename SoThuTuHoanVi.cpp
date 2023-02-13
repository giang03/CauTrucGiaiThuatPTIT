#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n, a[1005], x[1005];
int cnt;
bool flag[1005];

bool check(){
    for(int i = 1; i <= n; i++){
        if(a[i] != x[i]) return 0;
    }
    return 1;
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!flag[j]){
            x[i] = j;
            flag[j] = true;
            if(i == n){
                cnt++;
                if(check()){
                    cout << cnt << endl;
                    return;
                }
            }
            else Try(i + 1);
            flag[j] = false;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cnt = 0;
        memset (flag, false, sizeof(flag));
        cin >> n; 
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        Try(1);
    }
    return 0;
}
