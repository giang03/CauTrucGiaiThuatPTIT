#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int solve(ll n){
    int cnt = 0;
    queue <ll> q;
    q.push(1);
    while(q.front() <= n){
        ll x = q.front(); q.pop();
        cnt++;
        q.push(x * 10);
        q.push(x * 10 + 1);
    }
    return cnt;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}