#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int MOD = 1e9 + 7;

int solve(int a[], int b[],int n, int m){
    int i = 0, j = 0;
    while(i < n && j < m){
        if(a[i] == b[j]){
            i++;j++;
        }
        else return i+1;
    }
    return n;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n],b[n-1];
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;
        cout << solve(a,b,n,n-1) << endl;
    }
    return 0;
}