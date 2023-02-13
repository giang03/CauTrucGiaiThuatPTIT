#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n, k, a[10001];

void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i) i--;
    if(i == 0){
        for(int j = 1; j <= k; j++){
            a[j] = j;
        }
    }
    else {
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j-1] + 1;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= k; i++){
            cin >> a[i];
        }
        sinh();
        for(int i = 1; i <= k; i++){
            cout << a[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}
