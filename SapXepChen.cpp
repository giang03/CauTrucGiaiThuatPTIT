#include<bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i++){
        cout << "Buoc " << i << ": ";
        for(int j = 0; j <= i; j++){
            if(a[j] > a[i]){
                swap(a[i],a[j]);
            }
        }
        for(int j = 0; j <= i; j++){
            cout << a[j] << ' ';
        }
        cout << endl;
    }
}