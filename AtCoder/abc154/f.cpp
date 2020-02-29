#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = (1e+9)+7;
vector<ll> prod(2000003);
vector<ll> inv(2000003);
ll inverse(ll a){
    ll x = 1, p = MOD - 2;
    while(p != 0){
        if(p%2 == 1){ 
            x = (x * a) % MOD;
            p -= 1;
        }
        a = (a * a) % MOD;
        p /= 2;
    }        
    return x;
}

ll calc(ll x, ll y){
    ll ret = (((prod[x + y] * inv[x]) % MOD) * inv[y]) % MOD;
    return (ret == 0? ret + MOD - 1:ret-1);
}

int main(){
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    ll pv = 1;
    for(int i=1;i<=2000002;i++){
        pv = (pv * i) % MOD;
        prod[i] = pv;
        inv[i] = inverse(pv);
    }
    ll ans = calc(r2+1, c2+1);
    ans = ans - calc(r2+1, c1);
    ans = (ans < 0? ans + MOD: ans);
    ans = ans - calc(r1, c2+1);
    ans = (ans < 0? ans + MOD: ans);
    ans = (ans + calc(r1, c1))%MOD;
    cout << ans << endl;

}