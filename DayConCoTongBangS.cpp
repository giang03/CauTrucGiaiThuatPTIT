#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    int t; cin >> t;
    while(t--){
        int n,s; cin >> n >> s;
        int a[n],flag[s+1];
        for(int &x : a) cin >> x;
        sort(a,a+n);
        memset(flag,0,sizeof(flag));
        flag[0] = 1;
        for(int i = 0; i < n; i++){
            for(int j = s; j >= 0; j--){
                if(flag[j] == 1){
                    flag[a[i] + j] = 1;
                }
            }
        }
        if(flag[s]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
