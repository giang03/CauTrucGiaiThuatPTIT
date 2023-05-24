#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        stack <int> st;
        string s; cin >> s;
        int ans = 0;
        st.push(-1);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(i);
            }
            else {
                st.pop();
                if(st.size() > 0){
                    ans = max(ans,i-st.top());
                }
                else st.push(i);
            }
        }
        cout << ans << endl;
    }
    return 0;
}