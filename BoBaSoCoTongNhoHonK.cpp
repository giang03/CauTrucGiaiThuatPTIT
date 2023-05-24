#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        long long cnt = 0;
        long long a[n];
        for(int &x : a) cin >> x;
        sort(a,a+n);
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                int tmp = a[i] + a[j];
                int id = lower_bound(a+j+1,a+n,k-tmp) - a;
                cnt += id - j - 1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}