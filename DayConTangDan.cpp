#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n;
int a[1005];
int x[1005];
vector <string> ans;

bool check(){
    int tmp = 0;
    for(int i = 1; i <= n; i++){
        if(x[i]){
            if(a[i] <= tmp) return 0;
            else tmp = a[i];
        }
    }
    return 1;
}


void Try(int i){
    for(int j = 0; j <= 1; j++){
        x[i] = j;
        if(i == n){
            if(check()){
                string tmp = "";
                int cnt = 0;
                for(int l = 1; l <= n; l++){
                    if(x[l]){
                        tmp += to_string(a[l]) + ' ';
                        cnt++;
                    }
                }
                if(cnt > 1){
                    tmp.pop_back();
                    ans.push_back(tmp);
                }
            }
        }
        else Try(i + 1);
    }
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    Try(1);
    sort(ans.begin(),ans.end());
    for(string s : ans){
        cout << s << endl;
    }
    return 0;
}
