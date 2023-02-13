#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;


void solve(int a[], int n){
    ll tmp = 0, res = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            tmp = tmp * 10 + a[i];
        }
        else res = res * 10 + a[i];
    }
    cout << tmp + res << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a, a+ n);
        solve(a,n);
    }
    return 0;
}
