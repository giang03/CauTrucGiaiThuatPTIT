#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n;
char a[1001];

bool check(){
    int cnt = 0;
    for(int j = 1; j <= n; j++){
        if(a[j] == 'H') cnt++;
        if(cnt > 1) return 0;
        if(a[j] == 'A') cnt = 0;
    }
    return 1;
}

void Try(int i){
    if(i == n){
        if(check()){
            for(int j = 1; j <= n; j++) cout << a[j];
            cout << endl;
        }
    }
    else {
        a[i] = 'A'; Try(i + 1);
        a[i] = 'H'; Try(i + 1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        a[1] = 'H'; a[n] = 'A';
        Try(2);
    }
    return 0;
}
