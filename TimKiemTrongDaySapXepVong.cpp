#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        map<int,int> ma;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            ma[x] = (i+1);
        }
        cout << ma[k] << endl;
    }
}