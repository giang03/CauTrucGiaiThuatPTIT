#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

char c,a[1005];
int n;

void Try(int i){
    for(char j = a[i-1]; j <= c; j++){
        a[i] = j;
        if(i == n){
            for(int k = 1; k <= n; k++){
                cout << a[k];
            }
            cout << endl;
        }
        else Try(i + 1);
    }
}

int main(){
    cin >> c >> n;
    a[0] = 'A';
    Try(1);
    return 0;
}
