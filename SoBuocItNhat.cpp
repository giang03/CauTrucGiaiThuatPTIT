#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int main(){
    int t; cin >> t;
    while(t--){
        int n, s = 0;
        cin >> n;
        int a[n], l[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            l[i] = 1;
            for (int j = 0; j < i; j++)
            {
                if (a[i] >= a[j] && l[i] <= l[j])
                    l[i] = l[j] + 1;
            }
            s = max(s, l[i]);
        }
        cout << n - s << endl;
    }
    return 0;
}