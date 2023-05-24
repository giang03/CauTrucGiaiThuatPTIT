#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector <string> v;

void solve(){
    queue <string> q;
    q.push("1");
    while(v.size() <= 10000){
        string tmp = q.front();
        q.pop();
        v.push_back(tmp);
        q.push(tmp + "0");
        q.push(tmp + "1");
    }
}

int main(){
    solve();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 0; i < n; i++){
            cout << v[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}