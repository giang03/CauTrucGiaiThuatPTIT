#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        int a[n],b[m];
        set <int> se;
        map <int,int> ma;
        for(int &x : a){
            cin >> x;
            se.insert(x);
            ma[x] = 1;
        }
        for(int &x : b){
            cin >> x;
            se.insert(x);
            if(ma[x] == 1) ma[x] = 2;
        }
        for(int x : se) cout << x << ' ';
        cout << endl;
        for(auto x : ma){
            if(x.second == 2){
                cout << x.first << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}