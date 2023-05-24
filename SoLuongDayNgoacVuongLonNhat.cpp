#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    stack<int> st;
    st.push(-1);
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ')' && !st.empty() && s[st.top()] == '(')
            st.pop();
        else if (s[i] == ']' && !st.empty() && s[st.top()] == '[')
            st.pop();
        else
            st.push(i);
    }
    st.push(s.length());
    vector<int> v;
    while (!st.empty()) {
        v.push_back(st.top());
        st.pop();
    }
    reverse(v.begin(), v.end());
    int res = 0;
    for (int i = 1; i < v.size(); ++i) {
        int count = 0;
        for (int j = v[i - 1] + 1; j < v[i]; ++j) {
            if (s[j] == '[')
                count++;
        }
        res = max(res, count);
    }
    cout << res;
}

int main() {
    string s; cin >> s;
    solve(s);
    return 0;
}