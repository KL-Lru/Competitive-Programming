#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll x;
    cin >> x;
    ll money = 100;
    int ans = 0;
    while(money < x){
        ans ++;
        money *= 1.01;
    }
    cout << ans << endl;
}