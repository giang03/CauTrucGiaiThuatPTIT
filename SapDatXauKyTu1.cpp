#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

void solve(string s){
    map<char,int> ma;
    for(char x : s){
        ma[x]++;
    }
    int n = (s.size() + 1) / 2;
    for(auto x : ma){
        if(x.second > n){
            cout << -1 << endl;
            return;
        }
    }
    cout << 1 << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        solve(s);
    }
    return 0;
}
