#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n, k, a;
  ll bi[50] = {};
  ll pw[50] = {};
  ll crr = 0;
  cin >> n >> k;
  pw[0] = 1;
  for(int i=1;i<50;i++) pw[i] = pw[i-1]*2;

  for(int i=0;i<n;i++){
    int idx = 0;
    cin >> a;
    while(a!=0){
      bi[idx++] += a%2;
      a/=2;
    }
  }
  for(int i=(int)log2(k);i>=0;i--){
    if(bi[i] < n-bi[i] && crr+pw[i] <= k){
      bi[i] = n-bi[i];
      crr += pw[i];
    }
  }
  ll ans = 0;
  for(int i=0;i<50;i++){
    ans += bi[i]*pw[i];
  }
  cout << ans << endl;
}