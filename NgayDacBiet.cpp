#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int n,k;
int a[1005];

bool check(){
    if(a[1] == 0 && a[2] == 0) return 0;
    return 1;
}

void Try(int i){
    for(int j = 0; j <= 2; j+=2){
        a[i] = j;
        if(i == 5){
            if(check()){
                cout << a[1] << a[2];
                cout << "/02/2";
                cout << a[3] << a[4] << a[5] << endl;
            }
        }
        else Try(i + 1);
    }
}

int main(){
    Try(1);
    return 0;
}
