#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct node{
    char data;
    node *right, *left;
    node(char x){
        data = x;
        right = left = NULL;
    }
};

int main(){
    int t; cin >> t; 
    while(t--){
        string s; cin >> s;
        stack<node*> st;
        node *root = NULL;
        for(int i = 0; i < s.size(); i++){
            if(!isalpha(s[i])){
                root->data = s[i];
                root->right = st.top(); st.pop();
                root->left = st.top(); st.pop();
                st.push(root);
            }
            else st.push(new node(s[i]));
        }
    }
}