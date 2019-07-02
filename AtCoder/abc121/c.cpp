#include<bits/stdc++.h>
#include<tuple>
using namespace std;
#define ll long long
#define P pair<ll, ll>
int main(){
  ll n,m, a,b, sm=0;
  vector<P> v;
  cin >> n >> m;
  for(int i=0;i<n;i++){
    cin >> a >> b;
    v.push_back(P(a,b));
  }
  sort(v.begin(), v.end());
  for(int i=0;i<n && m > 0; i++){
    tie(a,b) = v[i];
    sm += a * min(b,m);
    m -= min(b,m);
  }
  cout << sm << endl;
}