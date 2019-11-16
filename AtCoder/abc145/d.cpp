#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = (1e+9)+7;

ll inverse(ll x){
    ll inv = 1;
    ll ex = MOD - 2;
    while(ex != 0){
        if(ex % 2){
            inv = (x * inv) % MOD;
            ex -= 1;
        }
        x = (x * x) % MOD;
        ex /= 2;
    }
    return inv;
}

ll pro(ll x){
    ll v = 1;
    for(int i=2;i<=x;i++){
        v = (v * i) % MOD;
    }
    return v;
}

int main(){
    int x,y;
    cin >> x >> y;
    double dx = (x * 2 - y) / 3.0;
    double dy = (y * 2 - x) / 3.0;
    if(dx != int(dx) || dy != int(dy) || dx < 0 || dy < 0){
        cout << 0 << endl;
        return 0;
    }

    ll upper = dx+dy;
    ll inv = (inverse(pro(dx)) * inverse(pro(dy)))%MOD;    
    ll pp = pro(upper);

    cout << ((pp * inv)%MOD) << endl;
}
