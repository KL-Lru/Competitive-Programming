#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n,k;
  ll a[1001]={};
  vector<ll> v;
  cin >> n >> k;
  for(int i=1;i<=n;i++){
    cin >> a[i];
      a[i] += a[i-1];
  }
  for(int i=0;i<=n;i++){
    for(int j=i+1;j<=n;j++){
      v.push_back(a[j]-a[i]);
    }
  }
  ll ans = 0;
  int pw = 40;
  while(pw>=0){
    int cnt = 0;
    ll crr = (ans+pow(2,pw));
    for(int i=0;i<v.size();i++){
      if( (crr & v[i]) == crr)
        cnt ++;
    }
    if(cnt >= k){
      ans += pow(2,pw);
    }
    pw--;
  }
  cout << ans << endl;
}