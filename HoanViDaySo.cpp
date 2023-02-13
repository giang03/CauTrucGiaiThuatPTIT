#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n;
int a[1005],x[1005];
bool flag[1005];

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!flag[j]){
            x[i] = j;
            flag[j] = true;
            if(i == n){
                for(int l = 1; l <= n; l++){
                    cout << a[x[l]] << ' ';
                }
                cout << endl;
            }
            else Try(i + 1);
            flag[j] = false;
        }
    }
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    Try(1);
    return 0;
}
