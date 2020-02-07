#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll h;
    ll d = 1;
    ll ans = 0;
    cin >> h;
    while(h!=0){
        ans += d;
        h /= 2;
        d *= 2;
    }
    cout << ans << endl;
}