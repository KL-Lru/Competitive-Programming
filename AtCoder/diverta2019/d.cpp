#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n;
  cin >> n;
  ll ans = 0;
  ll flor = sqrt(n); // 商と余りが一致する可能性があるのはここから
  for(ll i=n/flor;i>=1;i--){
    ll d = (n-i)/i;
    if(d == 0) continue;
    if((n-i)%i == 0 && n/d == i){ // i余らせて割り切れる && 割り切れた数で割るとiになる
      ans += ((n-i)/i);
    }
  }
  cout << ans << endl;
}