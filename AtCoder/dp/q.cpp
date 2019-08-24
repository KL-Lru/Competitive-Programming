#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF (1<<30)

vector<ll> seg_tree;
ll N;

void init(vector<ll> &v){
  ll n = v.size();
  N = pow(2, ceil(log2(n))); 
  seg_tree.resize(2*N-1);

  for(ll i=0;i<N;i++) seg_tree[N-1+i] = (i>=n?0:v[i]);
  for(ll i=N-2;i>=0;i--) seg_tree[i] = max(seg_tree[2*i+1], seg_tree[2*i+2]);
}

void update(ll ind, ll val){
  ind += N - 1;
  seg_tree[ind] = val;
  while(ind > 0){
    ind = (ind - 1) / 2;
    seg_tree[ind] = max(seg_tree[2*ind+1], seg_tree[2*ind+2]);
  }
}
ll query(ll a, ll b, ll ind, ll l, ll r){
  if(r < a || b < l) return 0;
  if(a <= l && r <= b) return seg_tree[ind];
  else return max(query(a, b, 2*ind+1, l, (l+r)/2), 
                  query(a, b, 2*ind+2, (l+r)/2+1, r));
}

int main(){
  ll n;
  cin >> n;
  vector<ll> h(n), a(n);
  init(h);
  for(ll i = 0; i < n; i++){
    cin >> h[i];
    h[i]--;
  }
  for(ll i = 0; i < n; i++){
    cin >> a[i];
  }
  for(ll i = 0; i < n; i++){
    ll segmax = query(0, h[i], 0, 0, N-1);
    update(h[i], segmax + a[i]);
  }
  cout << seg_tree[0] << endl;
}