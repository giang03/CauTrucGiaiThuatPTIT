#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int a[n];
        map<int,int> ma;
        for(int &x : a) {
            cin >> x;
            ma[x]++;
        }
        if(ma[k] == 0) cout << -1 << endl;
        else cout << ma[k] << endl;
    }
}