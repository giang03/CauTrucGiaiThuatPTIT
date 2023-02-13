#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n;
int x[1005];
char a[1005];
bool flag[1005];

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!flag[j]){
            x[i] = j;
            flag[j] = true;
            if(i == n){
                for(int l = 1; l <= n; l++){
                    cout << a[x[l]];
                }
                cout << ' ';
            }
            else Try(i + 1);
            flag[j] = false;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        n = s.size();
        for(int i = 1; i <= s.size(); i++){
            a[i] = s[i-1];
        }
        Try(1);
        cout << endl;
    }
    return 0;
}
