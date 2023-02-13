#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    int t; cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        int a[n],b[m],c[k];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];
        for(int i = 0; i < k; i++) cin >> c[i];
        int i = 0, j = 0,l = 0;
        bool ok = 1;
        while(i < n && j < m && l < k){
            if(a[i] == b[j] && a[i] == c[l]){
                cout << a[i] << ' ';
                ok = 0;
                i++;j++;l++;
            }
            if(a[i] < b[j] || a[i] < c[l]) i++;
            if(b[j] < a[i] || b[j] < c[l]) j++;
            if(c[l] < a[i] || c[l] < b[j]) l++;
        }
        if(ok) cout << "NO";
        cout << endl;
    }
    return 0;
}