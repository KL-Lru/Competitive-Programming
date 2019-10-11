#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    string s;
    ll k;
    cin >> s >> k;
    char buf = ' ';
    int cnt = 1;
    ll ans = 0;
    for(int i=0;i<s.size();i++){
        if(buf != s[i]){
            if(cnt > 1) ans += cnt/2;
            buf = s[i];
            cnt = 1;
        }else{
            cnt++;
        }
    }
    if(cnt > 1) ans += cnt/2;
    if(s[0] == s[s.size()-1]){
        int scnt = 1, ecnt = 1;buf = s[0];
        int i = 1;
        while(s[i++] == buf) scnt++;
        i = s.size() -2;
        while(s[i--] == buf) ecnt++;
        if(scnt + ecnt > s.size()) {// same all alphabet
            cout << s.size() * (k/2) + (s.size()/2) * (k%2) << endl;
            return 0;
        }else{
            ans -= scnt/2 + ecnt/2;
            cout << (ans * k) + ((scnt+ecnt)/2) * (k-1) + scnt/2 + ecnt/2 << endl;
            return 0;
        }
   }
    cout << ans * k << endl;
}