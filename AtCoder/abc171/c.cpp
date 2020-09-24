#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll D = 26;
int main(){
  ll n;
  cin >> n;
  n--;
  string ans;
  bool first = true;
  while(n > 0){
    ans = char('a' + n % D) + ans;
    n /= D;
    n--;
  }
  if(n == 0) ans = 'a' + ans;
  cout << ans << endl;
}