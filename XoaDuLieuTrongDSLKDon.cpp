#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;


int main(){
    int n; cin >> n; 
    int a[n];
    for(int &x : a) cin >> x;
    int x; cin >> x;
    for(int i : a){
        if(i != x){
            cout << i << ' ';
        }
    }
    return 0;
}
