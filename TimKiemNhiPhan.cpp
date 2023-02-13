#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int MOD = 1e9 + 7;

string solve(int a[], int n, int k){
    string pos = "NO";
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r)/2;
        if(a[m] == k){
            return to_string(m + 1);
        }
        else if(a[m] > k) r = m - 1;
        else l = m + 1;
    }
    return pos;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        cout << solve(a,n,k) << endl;
    }
    return 0;
}