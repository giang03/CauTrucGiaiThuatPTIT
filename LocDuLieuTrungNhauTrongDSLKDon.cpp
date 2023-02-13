#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;


int main(){
    int n; cin >> n; 
    map <int,int> ma;
    while(n--){
        int x; cin >> x;
        if(ma[x] == 0){
            cout << x << ' ';
            ma[x]++;
        }
    }
    return 0;
}
