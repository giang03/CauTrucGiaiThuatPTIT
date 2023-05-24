#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(string s){
    stack <char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '[' || s[i] == '{' || s[i] == '(' ){
            st.push(s[i]);
        }
        else if(s[i] == ')' && !st.empty() && st.top() == '('){
            st.pop();
        }
        else if(s[i] == '}' && !st.empty() && st.top() == '{'){
            st.pop();
        }
        else if(s[i] == ']' && !st.empty() && st.top() == '['){
            st.pop();
        }
        else return 0;
    }
    return 1;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(check(s)){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}