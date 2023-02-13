#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n;
int a[1001];
vector <string> v;

void Try(int i){
    for(int x = 0; x <= 1; x++){
        a[i] = x;
        if(i == n){
            string tmp = "";
            for(int j = 1; j <= n; j++){
                tmp += to_string(a[j]);
            }
            for(int j = n; j >= 1; j--){
                tmp += to_string(a[j]);
            }
            v.push_back(tmp);
        }
        else Try(i + 1);
    }
}

int main(){
    int t; cin >> t;
    for(int i = 1; i <= 15; i++){
        n = i;
        Try(1);
    }
    while(t--){
        cin >> n;
        for(string x : v){
            if(x.size() > n) break;
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}
