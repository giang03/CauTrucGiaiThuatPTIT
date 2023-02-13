#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n,a[1005];
vector <string> ans;

void Try(int i){
    a[i] = 6;
    if(i == n){
        string tmp = "";
        for(int j = 1; j <= n; j++){
            tmp += to_string(a[j]);
        }
        tmp += " ";
        ans.push_back(tmp);
    }
    else {
        Try(i + 1);
    }
    a[i] = 8;
    if(i == n){
        string tmp = "";
        for(int j = 1; j <= n; j++){
            tmp += to_string(a[j]);
        }
        tmp += " ";
        ans.push_back(tmp);
    }
    else {
        Try(i + 1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        ans.clear();
        cin >> n;
        Try(1);
        cout << ans.size() << endl;
        for(string x : ans){
            cout << x;
        }
        cout << endl;
    }
    return 0;
}
