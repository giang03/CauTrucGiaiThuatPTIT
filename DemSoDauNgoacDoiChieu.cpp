#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        stack <char> st;
        string s; cin >> s;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            else {
                if(!st.empty() && st.top() == '('){
                    st.pop();
                }
                else{
                    cnt++;
                    st.push('(');
                }
            }
        }
        cnt += st.size()/2;
        cout << cnt << endl;
    }
    return 0;
}