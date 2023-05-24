#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int n,k; cin >> n >> k;
    multiset<ll> se;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    int ans= 0;
    while(se.size() != 1){
        int t = 1;
        ll tmp = 0,a = 0, b = 0;
        while(!se.empty() && t <= k){
            auto it = se.begin();
            tmp += *it;
            if(t == 1){
                a = *it;
            }
            if(se.size() == 1 || t == k){
                b = *it;
            }
            t++;
            se.erase(it);
        }
        se.insert(tmp);
        ans += b - a;
    }
    cout << *se.begin() << endl << ans << endl;
}