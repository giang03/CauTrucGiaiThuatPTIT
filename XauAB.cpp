#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n;
char a[1001];
string ans = "";

void Try(int i){
    for(char x = 'A'; x <= 'B'; x++){
        a[i] = x;
        if(i == n){
            for(int j = 1; j <= n; j++){
                ans += a[j];
            }
            ans += ",";
        }
        else Try(i + 1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        ans.clear();
        cin >> n ;
        Try(1);
        ans.pop_back();
        cout << ans << endl;
    }
    return 0;
}
