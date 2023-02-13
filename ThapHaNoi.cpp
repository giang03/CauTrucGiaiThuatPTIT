#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

char a[3] = {'A', 'B' , 'C'};

void Try(int n,int i , int j, int k){
    if(n == 1){
        cout << a[i] << " -> " << a[j] << endl;
    }
    else {
        Try(n - 1, i , k , j);
        cout << a[i] << " -> " << a[j] << endl;
        Try(n-1,k, j , i);
    }
}

int main(){
    int n;
    cin >> n;
    Try(n, 0 , 2 , 1);
    return 0;
}
