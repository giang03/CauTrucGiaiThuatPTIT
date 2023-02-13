#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

bool cmp(pair <int,int> a, pair <int,int> b){
    return a.second < b.second;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        pair <int,int> pa[n];
        for(int i = 0; i < n; i++){
            cin >> pa[i].first >> pa[i].second;
        }
        sort(pa,pa+n,cmp);
        int cnt = 1, id = 0;
        for(int i = 1; i < n; i++){
            if(pa[i].first >= pa[id].second){
                cnt++;
                id = i;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
