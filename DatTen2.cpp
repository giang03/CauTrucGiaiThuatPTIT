#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n,k;
char a[1005];

void Try(int i){
    for(int j = a[i-1] + 1; j <= 64 + n; j++){
        a[i] = char(j);
        if(i == k){
            for(int l = 1; l <= k; l++){
                cout << a[l];
            }
            cout << endl;
        }
        else Try(i + 1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        a[0] = 64;
        Try(1);
    }
    return 0;
}
