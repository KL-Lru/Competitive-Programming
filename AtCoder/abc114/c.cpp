#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f[11];

ll solve(ll crr, ll n){
  if(crr > n) return 0;
  ll check = crr;
  bool s=false,f=false,t=false;
  ll cnt;
  while(check != 0){
    if(check%10 == 7){
      s = true;
    }
    if(check%10 == 5){
      f = true;
    }
    if(check%10 == 3){
      t = true;
    }
    check /= 10;
  }
  if(s && f && t) cnt = 1;
  else cnt = 0;
  cnt += solve((crr*10)+7, n);
  cnt += solve((crr*10)+5, n);
  cnt += solve((crr*10)+3, n);
  return cnt;
}

int main(){
  ll n;
  cin >> n;
  cout << solve(0, n) << endl;
}