#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

ll n;
struct MaTrix{
    ll a[15][15];

    MaTrix operator * (MaTrix o){
        MaTrix x;
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                x.a[i][j] = 0;
                for(int k = 0; k < 2; k++){
                    x.a[i][j] += a[i][k] * o.a[k][j];
                    x.a[i][j] %= MOD;
                }
            }
        }
        return x;
    }
};

MaTrix binPow(MaTrix a, ll n){
    if(n == 1) return a;
    MaTrix x = binPow(a,n/2);
    if(n%2 == 1) 
        return x * x * a;
    return x * x;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        MaTrix x;
        x.a[0][0] = 1;
        x.a[0][1] = 1;
        x.a[1][0] = 1;
        x.a[1][1] = 0;
        MaTrix y = binPow(x,n);
        cout << y.a[0][1] << endl;
    }
    return 0;
}