#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        stack <string> st;
        string s; getline(cin,s);
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            st.push(tmp);
        }
        while(!st.empty()){
            cout << st.top() << ' ';
            st.pop();
        }
        cout << endl;
    }
    return 0;
}