#include<bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    int a[n];
    vector<int> v[n-1];
    for(int &x : a) cin >> x;
    for(int i = 0; i < n-1; i++){
        int id = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[id]){
                id = j;
            }
        }
        swap(a[i],a[id]);
        for(int j = 0; j < n; j++){
            v[i].push_back(a[j]);
        }
    }
    for(int i = n-2; i >= 0; i--){
        cout << "Buoc " << i+1 << ": ";
        for(int j = 0; j < n; j++){
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
}