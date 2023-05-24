#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector <string> ans;

bool check(string s){
    if(s.size() < 4) return 0;
    if(s[s.size() - 1] == '2') return 0;
    int cnt[4] = {0};
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '2') cnt[0] = 1;
        if(s[i] == '3') cnt[1] = 1;
        if(s[i] == '5') cnt[2] = 1;
        if(s[i] == '7') cnt[3] = 1;
    }
    for(int i = 0; i < 4; i++){
        if(cnt[i] == 0) return 0;
    }
    return 1;
}

void solve(int n){
    queue<string> q;
    q.push("2");
    q.push("3");
    q.push("5");
    q.push("7");
    while(q.front().size() <= n){
        string s = q.front(); q.pop();
        if(check(s)){
            ans.push_back(s);
        }
        q.push(s+"2");
        q.push(s+"3");
        q.push(s+"5");
        q.push(s+"7");
    }
}

int main(){
    int n; cin >> n;
    solve(n);
    for(string x : ans){
        cout << x << endl;
    }
}