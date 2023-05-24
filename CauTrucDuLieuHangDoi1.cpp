#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        queue<int> q;
        int n; cin >> n;
        while(n--){
            int lc; cin >> lc;
            if(lc == 1){
                cout << q.size() << endl;
            }
            else if(lc == 2){
                if(q.empty()){
                    cout << "YES" << endl;
                }
                else cout << "NO" << endl;
            }
            else if(lc == 3){
                int x; cin >> x;
                q.push(x);
            }
            else if(lc == 4){
                if(!q.empty()) q.pop();
            }
            else if(lc == 5){
                if(!q.empty()){
                    cout << q.front() << endl;
                }
                else cout << -1 << endl;
            }
            else {
                if(!q.empty()){
                    cout << q.back() << endl;
                }
                else cout << -1 << endl;
            }
        }
    }
    return 0;
}