#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n, a[10001];
bool flag[10001];
int cnt;

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(flag[j] == false){
            a[i] = j;
            flag[j] = true;
            if(i == n){
                cout << cnt++ << ": ";
                for(int l = 1; l <= n; l++){
                    cout << a[l] << ' ';
                }
                cout << endl;
            }
            else Try(i + 1);
            flag[j] = false;
        }
    }
}

int main(){
    cnt = 1;
    cin >> n ;
    Try(1);
    return 0;
}
