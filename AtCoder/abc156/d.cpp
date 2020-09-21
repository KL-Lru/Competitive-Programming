#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = (1e+9)+7;

ll mpow(ll base, ll p){
    ll x = 1;
    while(p){
        if(p%2 == 1){
            x = (x * base) % MOD;
            p--;
        }
        base = (base * base) % MOD;
        p /= 2;
    }
    return x;
}

int main(){
    ll n,a,b; 
    cin >> n >> a >> b;
    ll mx = mpow(2, n)-1;
    ll vx = 1;
    for(int i=0;i<a;i++){
        vx = (vx * (n-i)) %MOD;
    }
    for(int i=1;i<=a;i++){
        vx = (vx * mpow(i, MOD-2)) %MOD;
    }
    mx -= vx;
    vx = 1;
    for(int i=0;i<b;i++){
        vx = (vx * (n-i)) %MOD;
    }
    for(int i=1;i<=b;i++){
        vx = (vx * mpow(i, MOD-2)) %MOD;
    }
    mx -= vx;
    while(mx < 0) mx += MOD;
    cout << mx << endl;
}