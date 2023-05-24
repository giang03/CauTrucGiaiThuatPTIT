#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        queue <string> q;
        vector<string> ans;
        q.push("6");
        q.push("8");
        while(q.front().size() <= n){
            string x = q.front(); q.pop();
            ans.push_back(x);
            q.push(x + "6");
            q.push(x + "8");
        }
        cout << ans.size() << endl;
        reverse(ans.begin(),ans.end());
        for(string x : ans){
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}