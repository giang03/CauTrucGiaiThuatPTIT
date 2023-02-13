#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n;
int a[1005];

bool check(){
    int cnt6 = 0, cnt8 = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] == 6){
            cnt6++;
            cnt8 = 0;
        }
        else {
            cnt8++;
            cnt6 = 0;
        }
        if(cnt6 == 4 || cnt8 == 2){
            return 0;
        }
    }
    return 1;
}

void Try(int i){
    if(i == n){
        if(check()){
            for(int j = 1; j <= n; j++){
                cout << a[j];
            }
            cout << endl;
        }
    }
    else {
        a[i] = 6;
        Try(i + 1);
        a[i] = 8;
        Try(i + 1);
    }
}

int main(){
    cin >> n;
    a[1] = 8; a[n] = 6;
    Try(2);
    return 0;
}
