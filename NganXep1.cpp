#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; 
    stack <string> st;
    while(cin >> s){
        if(s == "push"){
            string x; cin >> x;
            st.push(x);
        }
        else if(s == "pop"){
            st.pop();
        }
        else{
            stack <string> tmp = st;
            string s = "";
            if(tmp.empty()) cout << "empty";
            while(!tmp.empty()){
                s = tmp.top() + ' ' + s;
                tmp.pop();
            }
            cout << s <<  endl;
        }
    }
    return 0;
}