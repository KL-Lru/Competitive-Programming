#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n, p;
    cin >> n >> p;
    if(n == 1){
        cout << p << endl;
        return 0;
    }
    ll ans = 1;    
    for (ll i = 2; i <= sqrt(p); i++){
        ll cnt = 0;
        while(!(p % i)){
            p /= i;
            cnt++;
        }
        ans *= pow(i, cnt/n);
    }
    cout << ans << endl;
    return 0;
}