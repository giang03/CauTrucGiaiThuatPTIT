#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        bool check = true;
        for(int i = 0; i <= n/4; i++){
            if((n -(i*4)) % 7  == 0){
                check = false;
                for(int j = 1; j <= i; j++){
                    cout << 4;
                }
                for(int j = 1; j <= (n-(i*4))/7; j++){
                    cout << 7;
                }
                cout << endl;
                break;
            }
        }
        if(check == true) cout << "-1" << endl;
    }
    return 0;
}