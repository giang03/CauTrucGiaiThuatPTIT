#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;


int main(){
    int n; cin >> n;
    int a[n], b[n + 1];
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i++){
        b[a[i]] = i;
    }
    int cnt = 1,ans = 1;;
    for(int i = 2; i <= n; i++){
        if(b[i] > b[i-1]) cnt++;
        else cnt = 1;
        ans = max(ans,cnt);
    }
    cout << n - ans << endl;
    return 0;
}