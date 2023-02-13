#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a + n);
    if(a[0] > 0){
        cout << 1ll * a[n-2] * a[n-1]*a[n-3];
    }
    else if(a[n-1] < 0){
        cout << 1ll * a[0] * a[1];
    }
    else {
        ll ans = max(1ll*a[0]*a[1]*a[n-1], 1ll*a[n-2]*a[n-1]*a[n-3]);
        cout << ans << endl;
    }
    return 0;
}
