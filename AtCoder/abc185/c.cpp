#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  int l;
  cin >> l;
  ll ans = 1;
  for(int i=1; i<=11; i++){
    ans = ans * (l-i) / i;
  }
  cout << ans << endl;
}

/*
  (l - 1)! / 11! (l-12)!
  (l-1)...(l-11) / 11!
*/