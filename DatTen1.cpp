#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int t,n,k;
string a[1005];
int x[1005];

void Try(int i){
    for(int j = x[i-1] + 1; j <= n - k + i; j++){
        x[i] = j;
        if(i == k){
            for(int l = 1; l <= k; l++){
                cout << a[x[l]] << ' ';
            }
            cout << endl;
        }
        else Try(i + 1);
    }
}

int main(){
    cin >> t >> k;
    string s;
    set <string> se;
    while(t--){
        cin >> s;
        se.insert(s);
    }
    n = se.size();
    int j = 1;
    for(string x : se){
        a[j++] = x;
    }
    Try(1);
    return 0;
}
