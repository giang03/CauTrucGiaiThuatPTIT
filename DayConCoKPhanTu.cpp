#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n,k;
int a[1005];
int x[1005];
vector <string> v;

void Try(int i){
    for(int j = x[i-1] + 1; j <= n - k + i; j++){
        x[i] = j;
        if(i == k){
            string s = "";
            for(int l = 1; l <= k; l++){
                s += to_string(a[x[l]]) + ' ';
            }
            v.push_back(s);
        }
        else Try(i + 1);
    }
}

int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    Try(1);
    sort(v.begin(),v.end());
    for(string x : v) cout << x << endl;
    return 0;
}
