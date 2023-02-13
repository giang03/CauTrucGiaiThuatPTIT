#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;


void solve(int a[], int n){
    int b[n];
    for(int i = 0; i < n; i++){
        b[i] = a[i];
    }
    sort(b, b + n);
    for(int i = 0; i < n; i++){
        if(b[i] != a[i] && b[i] != a[n-i-1]){
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        solve(a,n);
    }
    return 0;
}
