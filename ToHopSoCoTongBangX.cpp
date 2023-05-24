#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;


int n; ll x;
int a[1005];
int v[1005];
bool ok;
vector <string> ans;
void Try(int k){
    for(int i = 1; i <= n; i++){
        if(v[k - 1] <= a[i] && x - a[i] >= 0){
            x -= a[i];
            v[k] = a[i];
            if(x == 0){
                ok = 0;
                string tmp = "[";
                for(int i = 1; i <= k; i++){
                    tmp += to_string(v[i]) + " ";
                }
                tmp.pop_back();
                tmp += "]";
                cout << tmp;
            }
            else Try(k+1);
            x += a[i];
        }
    }
}


int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> x;
        ok = 1;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        Try(1);
        if(ok) cout << -1;
        cout << endl;
    }
    return 0;
}