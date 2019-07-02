#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1000003;

ll power(ll a, ll p){
    ll x = 1, n = p;
    while (n != 0){
        if (n % 2 == 1){
            x = (x * a) % MOD;
            n -= 1;
        }
        else{
            a = (a * a) % MOD;
            n /= 2;
        }
    }
    return x;
}

int main(){
    int q;
    ll p[2*MOD + 1] = {};
    cin >> q;
    p[0] = 1;
    for (int i = 1; i <= 2*MOD; i++)
        p[i] = (p[i - 1] * i) % MOD;
    ll x, d, n;
    for (int i = 0; i < q; i++){
        cin >> x >> d >> n;
        if(d == 0){
            cout << power(x,n) << endl;
        }else if(n > MOD){
            cout << 0 << endl;
        }else{
            ll invd = power(d, MOD-2);
            ll dn = power(d, n);
            ll xd = x * invd % MOD;
            cout << dn * p[xd + n - 1] * power(p[xd-1], MOD-2) % MOD << endl;
        }
    }
}