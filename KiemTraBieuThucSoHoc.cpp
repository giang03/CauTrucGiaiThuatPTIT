#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        stack <char> st;
        string s; cin >> s;
        string ans = "No";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                st.push(s[i]);
            }
            if(s[i] == ')'){
                if(!st.empty() && st.top() == '('){
                    ans = "Yes";
                    break;
                }
                while(!st.empty() && st.top() != '(')
                    st.pop();
                st.pop();
            }
        }
        cout << ans << endl;
    }
    return 0;
}