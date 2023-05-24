#include<bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    int a[n];
    vector<int> v[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(a[j] > a[i]){
                swap(a[i],a[j]);
            }
        }
        for(int j = 0; j <= i; j++){
            v[i].push_back(a[j]);
        }
    }
    for(int i = n-1; i >= 0; i--){
        cout << "Buoc " << i << ": ";
        for(int j = 0; j <= i; j++){
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
}