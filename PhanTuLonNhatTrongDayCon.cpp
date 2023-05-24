#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        multiset<int> se;
        for(int i = 0; i < k; i++) se.insert(a[i]);
        for(int i = k; i < n; i++){
            auto it = se.find(a[i-k]);
            cout << *(se.rbegin()) << ' ';
            se.erase(it);
            se.insert(a[i]);
        }
        cout << *(se.rbegin()) << ' ';
        cout << endl;
    }
}