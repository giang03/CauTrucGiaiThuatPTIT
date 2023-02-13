#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

string s; 

void sinh(){
    int i = s.size() - 1;
    while(i >= 0 && s[i] == '1'){
        s[i] = '0'; i--;
    }
    if(i != -1) s[i] = '1';
}

int main(){
    int n; cin >> n;
    while(n--){
        cin >> s;
        sinh();
        cout << s << endl;
    }
    return 0;
}
