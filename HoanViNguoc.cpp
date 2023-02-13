#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n, a[10001];
bool flag[10001];
string tmp;    

void Try(int i){
    for(int j = n; j >= 1; j--){
        if(flag[j] == false){
            a[i] = j;
            flag[j] = true;
            if(i == n){
                for(int l = 1; l <= n; l++){
                    tmp += to_string(a[l]);
                }
                tmp += ',';
            }
            else Try(i + 1);
            flag[j] = false;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        tmp = "";
        cin >> n ;
        Try(1);
        tmp.pop_back();
        cout << tmp << endl;
    }
    return 0;
}
