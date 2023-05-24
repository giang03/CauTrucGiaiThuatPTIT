#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    int a[n];
    map<int,int> ma;
    for(int &x : a){
        cin >> x;
        ma[x] = 1;
    }
    int cnt = 0;
    for(int i = *min_element(a,a+n); i <= *max_element(a,a+n); i++){
        if(ma[i] == 0) cnt++;
    }
    return cnt;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << solve(n) << endl;
    }
}