#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n,k;
int x[1005], sum;
int a[1005];
bool ok;

void Try(int i){
    for(int j = 1; j >= 0; j--){
        x[i] = j;
        if(x[i]) sum += a[i];
        if(sum == k){
            ok = 1;
            string tmp = "[";
            for(int l = 1; l <= n; l++){
                if(x[l]){
                    tmp += to_string(a[l]) + " ";
                }
            }
            tmp.pop_back();
            tmp += "]";
            cout << tmp << ' ';
        }
        else if(sum + a[1] <= k && i + 1 <= n){
            Try(i + 1);
        }
        if(x[i]) sum -= a[i];
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        ok = 0;
        sum = 0;
        cin >> n >> k;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        sort(a+1,a+n+1);
        Try(1);
        if(!ok) cout << -1 << endl;
        else cout << endl;
    }
    return 0;
}
