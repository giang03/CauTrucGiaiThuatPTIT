#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ci = pair<char,int>;

void solve(string s){
    map<int,int> ma;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == ')') ma[i] = -1;
        else ma[i] = 2;
    }
    stack<ci> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(') st.push({s[i],i});
        else if(!st.empty() && s[i] == ')'){
            ma[i] = 1;
            ma[st.top().second] = 0;
            st.pop();
        }
    }
    for(int i = 0; i < s.size(); i++){
        if(ma[i] == 2){
            cout << s[i];
        }
        else cout << ma[i];
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        solve(s);
        cout << endl;
    }
    return 0;
}