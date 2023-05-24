#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int x[1000005];

void sang(){
    for (int i = 2; i <= 1000000; i++)
    {
        for (int j = i * 2; j <= 1000000; j += i)
            x[j] += i;
    }
}

int main(){
    sang();
    int a,b; cin >> a >> b;
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(x[i] > i){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}