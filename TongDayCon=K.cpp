#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n,s;
int a[100],x[100];
bool ok;

void sinh(){
    int i = n;
    while(i >= 1 && x[i] == 1){
        x[i] = 0;
        i--;
    }
    if(i == 0) ok = 0;
    else x[i] = 1;
}

int main(){
    ok = 1;
    cin >> n >> s;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int cnt = 0;
    while(ok){
        int sum = 0;
        for(int i = 1; i <= n; i++){
            if(x[i]){
                sum += a[i];
            }
        }
        if(sum == s){
            cnt++;
            for(int i = 1; i <= n; i++){
                if(x[i]){
                    cout << a[i] << ' ';
                }
            }
            cout << endl;
        }
        sinh();
    }
    cout << cnt << endl;
    return 0;
}
