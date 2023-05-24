#include<bits/stdc++.h>
using namespace std;
using ll = long long;
queue <string> q;
vector<string> ans;

bool check(string s){
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '2') cnt++;
    }
    return cnt*2 > s.size();
}

void solve(){
    q.push("1");
    q.push("2");
    while(ans.size() <= 1005){
        string x = q.front(); q.pop();
        if(check(x)) ans.push_back(x);
        q.push(x + "0");
        q.push(x + "1");
        q.push(x + "2");
    }
}

int main(){
    solve();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 0; i < n; i++){
            cout << ans[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}