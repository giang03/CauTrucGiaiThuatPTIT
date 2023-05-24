#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(int n){
    queue <ll> q;
    q.push(9);
    while(!q.empty() && q.front() % n != 0){
        ll x = q.front(); q.pop();
        q.push(x * 10);
        q.push(x * 10 + 9);
    }
    return q.front();
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}