#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pl = pair<ll, ll>;
int main(){
  ll n, c;
  cin >> n >> c;
  priority_queue<pl, vector<pl>, greater<pl>> q;
  for(int i=0; i<n; i++){
    ll ai, bi, ci;
    cin >> ai >> bi >> ci;
    q.push({ai, ci});
    q.push({bi+1, -ci});
  }
  
  ll cost = 0, buf = 1;
  ll ans = 0;
  while(!q.empty()){
    ll day, ci;
    tie(day, ci) = q.top();
    ans += min(c, cost) * (day - buf);
    while(!q.empty() && q.top().first == day){cost += q.top().second; q.pop();}
    buf = day;
  }
  cout << ans << endl;
}