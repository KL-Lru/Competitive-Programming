#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n >> s;
    int ans {1};
    char buf = ' ';
    for(auto c : s){
        if (buf == ' ') buf = c;
        else if(buf != c){
            ans++;
            buf = c;
        }
    }
    cout << ans << endl;
}
