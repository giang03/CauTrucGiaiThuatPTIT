#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

ll f[1005];

ll solve(string s){
    int n = s.size();
    if(s[0] == '0') return 0;
    f[0] = f[1] = 1;
    for(int i = 1; i < n; i++){
        if(s[i] == '0'){
            if(s[i-1] > '2')
                return 0;
        }
        else{
            f[i + 1] = f[i];
        }
        int tmp = (s[i-1]-'0')*10 + (s[i]-'0');
        if(tmp >= 10 && tmp <= 26) f[i+1] += f[i-1];
    }
    return f[n];
}

int main(){
    int t; cin >> t;
    while(t--){
        memset(f,0,sizeof(f));
        string s; cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}