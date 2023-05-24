#include<bits/stdc++.h>
using namespace std;

int firstPos(int a[], int l, int r, int k){
    int pos = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == k){
            pos = m;
            r = m - 1;
        }
        else if(a[m] < k) l = m + 1;
        else r = m - 1;
    }
    return pos;
}

int lastPos(int a[], int l, int r, int k){
    int pos = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == k){
            pos = m;
            l = m + 1;
        }
        else if(a[m] < k) l = m + 1;
        else r = m - 1;
    }
    return pos;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a,a+n);
        int cnt = 0;
        for(int i = 0; i < n - 1; i++){
            if(firstPos(a,i+1,n-1,k-a[i]) != -1){
                cnt += lastPos(a,i+1,n-1,k-a[i]) - firstPos(a,i+1,n-1,k-a[i]) + 1;
            }
        }
        cout << cnt << endl;
    }
}