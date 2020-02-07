#include <bits/stdc++.h>
#include <regex>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    int f = 0;
    for(auto c : s){
        if(f == 0 && c == 'A') f++;
        else if(f == 1 && c == 'B') f++;
        else if(f == 2 && c == 'C') {ans++;f=0;}
        else f = (c == 'A'?1:0);
    }
    cout << ans << endl;
}