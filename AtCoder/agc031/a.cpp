#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD=(1e+9) + 7;
int main(){
  int n;
  int lim = 'z'-'a' + 1;
  ll a[lim]={};
  string s;
  ll ans = 1;
  cin >> n >> s;
  for(int i=0;i<n;i++){
    a[s[i] - 'a']++;
  }
  for(int i=0;i<lim;i++){
    ans = (ans * (a[i] + 1)) % MOD;
  }
  cout << ans - 1 << endl;
}