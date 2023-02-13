#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;
const int dx[2] = {1,0};
const int dy[2] = {0,1};

int n;
int a[1005][1005];
bool ok;
string ans;

void Try(int i, int j){
    for(int k = 0; k <= 1; k++){
        int x = i + dx[k], y = j + dy[k];
        if(x >= 1 && x <= n && y >= 1 && y <= n && a[x][y]){
            if(k == 0){
                ans += "D";
            }
            else ans += "R";
            if(x == n && y == n){
                cout << ans << ' ';
                ok = 1;
            }
            else {
                Try(x,y);
            }
            ans.pop_back();
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        ok = 0; ans = "";
        cin >> n;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++) cin >> a[i][j];
        }
        if(a[1][1] == 0){
            cout << -1 << endl;
        }
        else {
            Try(1,1);
            if(!ok){
                cout << -1 << endl;
            }
            else cout << endl;
        }
    }
    return 0;
}
