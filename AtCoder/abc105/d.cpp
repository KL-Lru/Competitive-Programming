#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n, m;
  int a, buf = 0;
  ll ans = 0;
  map<int, int> d;
  cin >> n >> m;
  d[0]++;
  for(int i=0;i<n;i++){
    cin >> a;
    buf = (a + buf) % m; 
    d[buf]++;
  }
  for(map<int, int>::iterator iter = d.begin();iter !=d.end();iter++){
    ll cnt = iter->second;
    ans += (cnt * (cnt - 1)) / 2;
  }
  cout << ans << endl;
}