#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n, k;
int a[1005],x[1005];

void Try(int i){
    for(int j = x[i-1] + 1; j <= n - k + i; j++){
        x[i] = j;
        if(i == k){
            for(int l = 1; l <= k; l++){
                cout << a[x[l]] << ' ';
            }
            cout << endl;
        }
        else Try(i + 1);
    }
}

int main(){
    cin >> n >> k;
    set <int> se;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    n = se.size();
    int i = 1;
    for(int x : se){
        a[i++] = x;
    }
    Try(1);
    return 0;
}
