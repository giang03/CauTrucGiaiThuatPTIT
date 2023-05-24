#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >>x;
        stack <int> st;
        vector <int> ans;
        for(int i = n-1; i>= 0; i--){
            while(!st.empty() && st.top() <= a[i]){
                   st.pop(); 
            }
            if(st.empty()){
                ans.push_back(-1);
            }
            else {
                ans.push_back(st.top());
            }
            st.push(a[i]);
        }
        for(int i = n - 1; i >= 0; i--){
            cout << ans[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}