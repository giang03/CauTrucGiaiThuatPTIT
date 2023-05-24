#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

void solve(int a[], int n){
    int l = 0, r = n - 1;
    while(l <= r){
        if(l != r){
            cout << a[r] << ' ' << a[l] << ' ';
        }
        else cout << a[r];
        l++; r--;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a,a+n);
        solve(a,n);
        cout << endl;
    }
    return 0;
}