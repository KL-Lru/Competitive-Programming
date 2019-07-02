#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD ((ll)(1e+9)+7)

ll pow2(int n){
  ll ret = 1;
  for(int i = 0; i < n; i++){
    ret = (ret*2) % MOD;
  }
  return ret;
}


int main(){
  int n;
  int a[100001] = {};
  int cnt[100001] = {};
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  if(n%2 == 1) cnt[0]++;
  for(int i = 0; i < n; i++){
    if(++cnt[a[i]] > 2){
      cout << 0 << endl;
      return 0;
    }
  }
  for(int i = 0; i < n; i++){
    if(cnt[a[i]] == 1){
      cout << 0 << endl;
      return 0;
    }
  }
  cout << pow2(n/2) << endl;
}