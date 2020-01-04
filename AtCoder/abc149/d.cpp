#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n,k;
    cin >> n >> k;
    int r,s,p;
    cin >> r >> s >> p;
    string t;
    cin >> t;
    vector<bool> win(n, false);
    ll ans = 0;
    for(int i=0;i<n;i++){
        if(i >= k && win[i-k] && t[i-k] == t[i]) continue;         
        switch(t[i]){
            case 'r': ans += p;break;
            case 's': ans += r;break;
            case 'p': ans += s;break;
        }
        win[i] = true;
    }
    cout << ans << endl;
}