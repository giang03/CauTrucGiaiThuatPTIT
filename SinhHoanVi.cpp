#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n, a[10001];
bool flag[10001];

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(flag[j] == false){
            a[i] = j;
            flag[j] = true;
            if(i == n){
                for(int l = 1; l <= n; l++){
                    cout << a[l];
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
        cin >> n ;
        memset(flag, false, sizeof(flag));
        Try(1);
        cout << endl;
    }
    return 0;
}
