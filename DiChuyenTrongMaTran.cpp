#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

ll a[1005][1005];

void sang(){
    for(int i = 1; i <= 100; i++){
        for(int j = 1; j <= 100; j++){
            if(i == j) a[i][j] = 1;
            else if(i == 1) a[i][j] = j;
            else {
                a[i][j] = a[i-1][j-1] + a[i-1][j];
            }
        }
    }
}

int main(){
    int t; cin >> t;
    sang();
    while(t--){
        int m,n; cin >> m >> n;
        for(int i = 0; i < m*n; i++){
            int x; cin >> x;
        }
        cout << a[n+m-1][n] << endl;
    }
    return 0;
}
