#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    vector <int> v;
    for(int x : a){
        auto it = lower_bound(v.begin(),v.end(),x);
        if(it == v.end()){
            v.push_back(x);
        }
        else 
            *it = x;
    }
    cout << v.size() << endl;
    return 0;
}
