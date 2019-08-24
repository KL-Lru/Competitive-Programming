#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = (1e+9) +7;

int main(){
  ll n,k;
  cin >> n >> k;
  vector<ll> a(n), cnt(n, 0), after(n, 0);
  for(ll i=0;i<n;i++) cin >> a[i];
  for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
      if(a[i] > a[j]){
        cnt[i] ++;
        if(i < j) after[i]++;
      }
    }
  }
  ll ans = 0;
  for(ll i=0;i<n;i++){
    ans = (ans + (k * after[i])%MOD + (((k*(k-1)/2)%MOD) * cnt[i])%MOD) %MOD; 
  }
  cout << ans << endl;
}