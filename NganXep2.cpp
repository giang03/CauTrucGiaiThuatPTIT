#include<bits/stdc++.h>
using namespace std;

int main(){
    stack <string> st;
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(s == "PUSH"){
            string x; cin >> x;
            st.push(x);
        }
        else if(s == "POP"){
            if(!st.empty())
                st.pop();
        }
        else{
            if(st.empty()) cout << "NONE" << endl;
            else cout << st.top() << endl;
        }
    }
    return 0;
}