#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

ll ans,tmp;
bool xuoi[1005],nguoc[1005],cot[1005];
int a[1005][1005];
void Try(int i){
    for(int j = 1; j <= 8; j++){
        if(!xuoi[i + j - 1] && !nguoc[i - j + 8] && !cot[j]){
            tmp += a[i][j];
            xuoi[i + j - 1] = true;
            nguoc[i - j + 8] = true;
            cot[j] = true;
            if(i == 8){
                ans = max(ans,tmp);
            }
            else Try(i + 1);
            tmp -= a[i][j];
            xuoi[i + j - 1] = false;
            nguoc[i - j + 8] = false;
            cot[j] = false;
        }
    }
}

int main(){
    int t; cin >> t;
    for(int i = 1; i <= t; i++){
        ans = 0, tmp = 0;
        for(int i = 1; i <= 8; i++){
            for(int j = 1; j <= 8; j++)
                cin >> a[i][j];
        }
        Try(1);
        cout << "Test " << i << ": " << ans << endl;
    }
    return 0;
}