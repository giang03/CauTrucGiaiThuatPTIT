#include<bits/stdc++.h>
using namespace std;

bool f[1000005];

void sang(){
    for(int i = 0; i <= 1e6; i++) f[i] = 1;
    f[0] = f[1] = 0;
    for(int i = 2; i <= 1e3; i++){
        if(f[i]){
            for(int j = i*i; j <= 1e6; j += i){
                f[j] = 0;
            }
        }
    }
}

int main(){
    sang();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        bool ok = 0;
        for(int i = 2; i <= n/2; i++){
            if(f[i] && f[n-i]){
                ok = 1;
                cout << i << ' ' << n-i << endl;
                break;
            }
        }
        if(!ok) cout << -1 << endl;
    }
}