#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll a, b ,x;
    cin >> a >> b >> x;
    ll ans = 0;
    if(x >= a * 1e+9 + b * 10){
        cout << (ll)1e+9 << endl;
        return 0;
    }
    for(ll d = 1; d <= 9; d ++){
        ll l = (d == 1?0:pow(10, d-1)), r = pow(10, d);
        if(x < a * l + b * d) break;
        while(r - l > 1){
            ll mid = (l + r) / 2;
            ll cost = a * mid + b * d;
            if(cost <= x){
                l = mid;
            }else{
                r = mid;
            }
        }
        ans = max(l, ans);
    }
    cout << ans << endl;
    return 0;
}
