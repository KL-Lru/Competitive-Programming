#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e+9+7;
ll tic(ll n){
    return (n*(n+1))/2;
}

int main(){
    int n, k;
    cin >> n >> k;
    ll ans = 0;
    for(int i=k; i<=n+1; i++){
        ans = (ans + (tic(n) - (tic(n-i))) - tic(i-1) + 1) % MOD; 
    }
    cout << ans << endl;
}