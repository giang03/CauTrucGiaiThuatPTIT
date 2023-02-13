#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n;
int a[1005];


int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        stack<string> st;
        while(n){
            string tmp = "[";
            for(int i = 1; i <= n; i++){
                tmp += to_string(a[i]) + ' ';
                a[i-1] = a[i-1] + a[i];
            }
            tmp.pop_back();
            tmp += "]";
            st.push(tmp);
            n--;
        }
        while(!st.empty()){
            cout << st.top() << ' ';
            st.pop();
        }
        cout << endl;
    }
    return 0;
}
