#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
int main(){
  int n;
  ll ans = 1;
  cin >> n;
  for(int i=1;i<=n;i++){
    ans = (ans * i) % MOD;
  }
  cout << ans << endl;
}