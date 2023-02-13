#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n;
int a[1001];
string x,y;
vector <string> v;

bool check(){
    int cnt1 = 0, cnt0 = 0;
    int ans1 = 0, ans0 = 0;
    for(int i = 1; i <= n; i++){
        if(a[i]) {
            cnt1++;
            cnt0=0;
        }
        else{
            cnt0++;
            cnt1 = 0;
        }
        ans1 = max(cnt1,ans1);
        ans0 = max(cnt0,ans0);
    }
    return (ans1 > ans0 && ans1 >= 5);
}

void Try(int i){
    for(int k = 0; k <= 1; k++){
        a[i] = k;
        if(i == n){
            if(check()){
                string tmp = "";
                for(int j = 1; j <= n; j++){
                    if(a[j]) tmp += x;
                    else tmp += y;
                }
                v.push_back(tmp);
            }
        }
        else Try(i + 1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        v.clear();
        cin >> n >> x;
        if(x == "X") y = "O";
        else y = "X";
        Try(1);
        sort(v.begin(),v.end());
        for(string s : v){
            cout << s << endl;
        }
    }
    return 0;
}
