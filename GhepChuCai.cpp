#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

char c,a[1005];
int n;
bool flag[1005];

bool check(){
    for(int i = 2; i < n; i++){
        if(a[i] == 'A' || a[i] == 'E'){
            if(a[i-1] != 'A' && a[i-1] != 'E' && a[i+1] != 'A' && a[i +1] != 'E')
                return 0;
        }
    }
    return 1;
}

void Try(int i){
    for(char j = 'A'; j <= c; j++){
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
    cin >> c;
    n = c - 'A' + 1;
    Try(1);
    return 0;
}
