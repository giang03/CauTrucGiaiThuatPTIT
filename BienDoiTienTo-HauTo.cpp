#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        stack <string> st;
        string s; cin >> s;
        for(int i = s.size() - 1; i >= 0; i--){
            if(isalpha(s[i])){
                string x = "";
                x += s[i];
                st.push(x);
            }
            else {
                string a = st.top(); st.pop();
                string b = st.top(); st.pop();
                st.push(a + b + s[i]);
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}