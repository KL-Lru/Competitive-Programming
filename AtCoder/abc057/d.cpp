#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll comb[51][51];
void pascal(ll n){
  for(ll i=0;i<=n;i++){
    for(ll j=0;j<=i;j++){
      if(j == 0 || j == i){
        comb[i][j] = 1;
      }else{
        comb[i][j] = (comb[i-1][j-1] + comb[i-1][j]);
      }
    }
  }
}

int main(){
  ll n, a, b;
  cin >> n >> a >> b;
  ll v[n];
  for(ll i = 0;i < n; i++){
    cin >> v[i];
  }
  sort(v, v+n, greater<ll>());
  double av = 0.0;
  for(ll i = 0; i < a; i++){
    av += v[i];
  }
  av /= a;
  cout << fixed << setprecision(20) << av << endl;
  pascal(n);
  ll ans = 0;
  if(v[0] != v[a]){
    ll acnt = 0,bcnt = 0;
    for(ll i = 0; i < a; i++){
      if(v[a-1] == v[i]){
        acnt++;
      }
    }
    for(ll i = 0; i < n; i++){
      if(v[i] == v[a-1]){
        bcnt++;
      }
    }
    ans += comb[bcnt][acnt];
  }else{
    ll cnt = 0;
    for(ll i = 0; i < n; i++){
      if(v[i] == v[0]){
        cnt++;
      }
    }
    for(ll i = a; i <=min(cnt,b); i++ ){
      ans += comb[cnt][i];
    }
  }
  cout << ans << endl;
}
