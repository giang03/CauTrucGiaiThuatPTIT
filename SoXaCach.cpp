#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n;
int a[1005];
bool flag[1005];

bool check(){
    for(int i = 2; i < n; i++){
        if(abs(a[i] - a[i-1]) == 1 || abs(a[i] - a[i+1]) == 1)
            return 0;
    }
    return 1;
}

void Try(int i){
    for(char j = 1; j <= n; j++){
        if(!flag[j]){
            flag[j] = true;
            a[i] = j;
            if(i == n){
                if(check()){
                    for(int k = 1; k <= n; k++){
                        cout << a[k];
                    }
                    cout << endl;
                }
            }
            else Try(i + 1);
            flag[j] = false;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        Try(1); 
    }
    return 0;
}
