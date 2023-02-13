#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n, k;
int a[1001];
int cnt;

void Try(int i){
    for(int x = 0; x <= 1; x++){
        a[i] = x;
        if(x == 1) cnt++;
        if(i == n){
            if(cnt == k){
                for(int j = 1; j <= n; j++) cout << a[j];
                cout << endl;
            }
        }
        else Try(i + 1);
        if(x == 1) cnt--;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cnt = 0;
        cin >> n >> k;
        Try(1);
    }
    return 0;
}
