#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
  ll n;
  cin >> n;
  priority_queue<ll, vector<ll>, greater<ll>> q;
  for(ll i=1; i<=sqrt(n); i++){
    if(n%i == 0) {
      q.push(i);
      if(i != n/i)
        q.push(n/i);
    }
  }
  while(!q.empty()){
    cout << q.top() << endl; q.pop();
  }
}