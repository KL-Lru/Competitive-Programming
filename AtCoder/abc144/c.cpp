#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n;
    cin >> n;
    ll ans = n;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i == 0){
            ans = min(ans, (i-1)+(n/i -1));
        }
    }
    cout << ans << endl;
}