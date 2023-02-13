#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n,k, a[10001];

void Try(int i){
    for(int j = n - k + i; j >= a[i - 1] + 1; j--){
        a[i] = j;
        if(i == k){
            for(int l = 1; l <= k; l++){
                cout << a[l] << ' ';
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
        Try(1);
    }
    return 0;
}
