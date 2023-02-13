#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

string s;

bool check(){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1') return 1;
    }
    return 0;
}

void sinh(){
    int i = s.size() - 1;
    if(check()){
        while(i >= 0 && s[i] == '0'){
            s[i] = '1';
            i--;
        }
        s[i] ='0';
        cout << s << endl;
    }
    else {
        for(int j = 0; j < s.size(); j++) cout << '1';
        cout << endl;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> s;
        sinh();
    }
    return 0;
}
