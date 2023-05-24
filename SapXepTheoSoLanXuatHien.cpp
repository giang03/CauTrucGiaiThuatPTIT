#include<bits/stdc++.h>
using namespace std;

map<int,int> ma;

bool cmp(int a, int b){
    if(ma[a] != ma[b]) return ma[a] > ma[b];
    return a < b;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        ma.clear();
        for(int &x : a){
            cin >> x;
            ma[x]++;
        }
        sort(a,a+n,cmp);
        for(int x : a) cout << x << ' ';
        cout << endl;
    }
}