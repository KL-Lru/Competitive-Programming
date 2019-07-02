#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

ll calc(ll n){
  ll ret = 1;
  for(int i=0;i<10;i++){
    ret = (ret * n)%MOD;
  }
  return ret;
}

ll solve(ll n){
  ll ans = 0;
  for(int i=1;i<=n;i++){
    bool eq = false;
    int cnt = 0;
    for(int j=1;j<=n;j++){
      if(i*j <=n){
        if(i==j) eq = true;
        cnt++;
      }else break;
    }
    ans = (ans+(calc(i)-calc(i-1))*calc(cnt)+MOD)%MOD;
  }
  return ans;
}

int main(){
  ll n;
  cin >> n;
  cout << solve(n) << endl;
}
