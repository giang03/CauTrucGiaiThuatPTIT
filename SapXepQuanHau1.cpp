#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n;
int a[1005];
bool xuoi[1005],nguoc[1005],cot[1005];
int cnt;

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!xuoi[i + j - 1] && !nguoc[i - j + n] && !cot[j]){
            xuoi[i + j - 1] = true;
            nguoc[i - j + n] = true;
            cot[j] = true;
            if(i == n){
                cnt++;
            }
            else Try(i + 1);
            xuoi[i + j - 1] = false;
            nguoc[i - j + n] = false;
            cot[j] = false;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        cnt = 0;
        Try(1);
        cout << cnt << endl;
    }
    return 0;
}
