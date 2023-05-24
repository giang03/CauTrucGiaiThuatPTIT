#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int f[1005][1005];

int main(){
    int t; cin >> t;
    while(t--){
        string a,b; cin >> a >> b;
        memset(f,0,sizeof(f));
        for(int i = 0; i < a.size(); i++){
            for(int j = 0; j < b.size(); j++){
                if(a[i]==b[j]){
                    f[i+1][j+1] = f[i][j] + 1;
                }
                else f[i+1][j+1] = max(f[i][j+1],f[i+1][j]);
            }
        }
        cout << f[a.size()][b.size()] << endl;
    }
    return 0;
}
