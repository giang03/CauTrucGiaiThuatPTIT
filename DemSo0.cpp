#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int MOD = 1e9 + 7;

int solve(int a[], int n){
    int pos = 0;
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r)/2;
        if(a[m] == 0){
            pos = m + 1;
            l = m + 1;
        }
        else r = m - 1;
    }
    return pos;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        cout << solve(a,n) << endl;
    }
    return 0;
}