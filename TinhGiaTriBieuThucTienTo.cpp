#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s[n];
        stack <ll> st;
        for(int i = 0; i < n; i++) cin >> s[i];
        for(int i = n-1; i >= 0; i--){
            if(s[i] != "+" && s[i] != "-" && s[i] != "*" && s[i] != "/"){
                st.push(stoll(s[i]));
            }
            else {
                ll a = st.top(); st.pop();
                ll b = st.top(); st.pop();
                if(s[i] == "+"){
                    st.push(a+b);
                }
                else if(s[i] == "-"){
                    st.push(a-b);
                }
                else if(s[i] == "*"){
                    st.push(a*b);
                }
                else st.push(a/b);
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}