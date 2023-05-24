#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int step = 0;
        vector<int> v[n];
        for (int i = 0; i < n - 1; i++){
            bool k = false;
            for (int j = 0; j < n - i - 1; j++){
                if (a[j] > a[j + 1]){
                    swap(a[j], a[j + 1]);
                    k = true;
                }
            }
            if (k == false)
                break;
            step++;
            for (int j = 0; j < n; j++)
                v[i].push_back(a[j]);
        }
        for(int i = step-1; i >= 0; i--){
            cout << "Buoc " << i+1 <<": ";
            for(int j = 0; j < v[i].size(); j++){
                cout << v[i][j] << ' ';
            }
            cout << endl;
        }
    }
}