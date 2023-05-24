#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int n;cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int ans = 0;
    queue<int> q;
    for(int i = 0; i < n; i++){
        if(q.empty()) q.push(a[i]);
        if(!q.empty() && a[i] <= q.back() && a[i] >= q.front()){
            ans++;
            q.push(a[i]);
        }
    }
}