#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int k;

bool cmp(int a, int b){
    return abs(k - a) < abs(k - b);
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        stable_sort(a,a+n,cmp);
        for(int x : a) cout << x << ' ';
        cout << endl;
    }
    return 0;
}