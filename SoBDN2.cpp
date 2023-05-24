#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        queue<ll> q;
        q.push(1);
        while (1){
            ll x = q.front();
            if (x % n == 0){
                cout << x << endl;
                break;
            }
            q.pop();
            q.push(x * 10);
            q.push(x * 10 + 1);
        }
    }
    return 0;
}