#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int MOD = 1e9 + 7;

int solve(int a[], int b[],int n, int m, int k){
    int i = 0, j = 0;
    vector<int> v;
    while(i < n && j < m){
        if(a[i] < b[j]){
            v.push_back(a[i++]);
        }
        else v.push_back(b[j++]);
    }
    while(i < n) v.push_back(a[i++]);
    while(j < m) v.push_back(b[j++]);
    return v[k-1];
}

int main(){
    int t; cin >> t;
    while(t--){
        int n,m,k; cin >> n >> m >> k;
        int a[n],b[m];
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;
        cout << solve(a,b,n,m,k) << endl;
    }
    return 0;
}