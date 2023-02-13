#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;
int f[10] = {1,2,5,10,20,50,100,200,500,1000};


void solve(string a, string b){
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '6') a[i] = '5';
    }
    for(int i = 0; i < b.size(); i++){
        if(b[i] == '6') b[i] = '5';
    }
    cout << stoll(a) + stoll(b) << ' ';
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '5') a[i] = '6';
    }
    for(int i = 0; i < b.size(); i++){
        if(b[i] == '5') b[i] = '6';
    }
    cout << stoll(a) + stoll(b) << ' ';
}

int main(){
    string a,b;
    cin >> a >> b;
    solve(a,b);
    return 0;
}
