#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        set<int> se;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            se.insert(x);
        }
        auto it = se.begin();
        it++;
        if(it != se.end()){
            it--;
            cout << *it << ' ';
            it++;
            cout << *it << endl;
        }
        else cout << -1 << endl;
    }
}