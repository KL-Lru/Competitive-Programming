#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 998244353;

ll mpow(ll x, ll p){
    ll ret = 1;
    while(p != 0){
        if(p % 2){
            ret = (ret * x) %MOD;
            p -= 1;
        }
        x = (x * x) % MOD;
        p /= 2;
    }
    return ret;
}


int main(){
    int n;
    cin >> n;
    int d;
    ll ans = 1;
    vector<int> c(n+1, 0);
    for(int i=0;i<n;i++){
        cin >> d;
        if((i == 0 && d != 0) || (i != 0 && d == 0)) ans = 0;
        c[d]++;
    }
    for(int i=0;i<n;i++){
        ans = (ans * mpow(c[i], c[i+1])) % MOD;
    }
    cout << ans << endl;
}