#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int n; cin >> n;
    cin.ignore();
    set<pair<int,int>> se;
    string s;
    for(int i = 1; i <= n; i++){
        getline(cin,s);
        stringstream ss(s);
        string tmp = "";
        while(ss >> tmp){
            int x = stoi(tmp);
            if(i < x){
                se.insert({i,x});
            }
            else{
                se.insert({x,i});
            }
        }
    }
    for(auto x : se){
        cout << x.first << " " << x.second << endl;
    }
}