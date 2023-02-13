#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;


bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

void solve(pair <int,int> pa[], int n){
    int cnt = 1;
    int id = 0;
    for(int i = 1; i < n; i++){
        if(pa[i].first >= pa[id].second){
            id = i;
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        pair <int,int> pa[n];
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            pa[i].first = x;
        }
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            pa[i].second = x;
        }
        sort(pa,pa+n,cmp);
        solve(pa,n);
    }
    return 0;
}
