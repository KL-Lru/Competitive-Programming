#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n;
  ll a[100000], sm[100000] = {};
  cin >> n;
  for(int i=0;i<n;i++)
    cin >> a[i];
  sm[0] = a[0];
  for(int i=1;i<n;i++)
    sm[i] = sm[i-1] + a[i];
  ll diff = 0, cnt = 0, ans = 0;

  for(int i=0;i<n;i++){
    ll dst = 0;
    if(i%2 == 0){
      dst = max((ll)0, 1 - (sm[i] + diff) );
      diff += dst;
    }else{
      dst = max((ll)0, 1 + (sm[i] + diff) );
      diff -= dst;
    }
    cnt += dst;
  }
  ans = cnt;
  diff = 0;
  cnt = 0;
  for(int i=0;i<n;i++){
    ll dst = 0;
    if(i%2 == 1){
      dst = max((ll)0, 1 - (sm[i] + diff) );
      diff += dst;
    }else{
      dst = max((ll)0, 1 + (sm[i] + diff) );
      diff -= dst;
    }
    cnt += dst;
  }
  ans = min(ans, cnt);
  cout << ans << endl;
}
