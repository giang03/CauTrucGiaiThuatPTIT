#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n,k, a[1005], x[1005];
bool flag[1005];
vector <int> v[1005];
int ans;
void Try(int i){
    for(int j = 1; j <= k; j++){
        if(flag[j] == false){
            x[i] = j;
            flag[j] = true;
            if(i == k){
                int maxv = 0, minv = INT_MAX;
                for(int l = 1; l <= n; l++){
                    int tmp = 0;
                    for(int r = 1; r <= k; r++){
                        tmp = tmp* 10 + v[l][x[r]-1];
                    }
                    maxv = max(tmp,maxv);
                    minv = min(tmp,minv);
                }
                ans = min(ans, maxv-minv);
            }
            else Try(i + 1);
            flag[j] = false;
        }
    }
}

int main(){
    cin >> n >> k;
    ans = INT_MAX;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        string s = to_string(a[i]);
        while(s.size() < k) s = "0" + s;
        for(int j = 0; j < s.size(); j++){
            v[i].push_back(s[j] - '0');
        }
    }
    Try(1);
    cout << ans << endl;
    return 0;
}
