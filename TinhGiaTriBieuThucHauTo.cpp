#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        stack <ll> st;
        string s; cin >> s;
        for(int i = 0; i < s.size(); i++){
            if(isdigit(s[i])){
                st.push(s[i] -'0');
            }
            else {
                ll a = st.top(); st.pop();
                ll b = st.top(); st.pop();
                if(s[i] == '+'){
                    st.push(a+b);
                }
                else if(s[i] == '-'){
                    st.push(b-a);
                }
                else if(s[i] == '*'){
                    st.push(a*b);
                }
                else st.push(b/a);
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}