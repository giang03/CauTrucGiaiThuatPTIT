#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string tmp = "";
        set<char>se;
        for(int i = 0; i < n; i++){
            string s; cin >> s;
            tmp += s;
        }
        for(char x : tmp){
            if(isdigit(x)) se.insert(x);
        }
        for(char x : se) cout << x << ' ';
        cout << endl;
    }
}