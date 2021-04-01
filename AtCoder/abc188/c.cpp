#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int calc(ll lp, ll rp, bool flag, vector<int> &a){
  if(rp - lp <= 1) return lp;
  ll left, right;
  left = calc(lp, (rp + lp) / 2, false, a);
  right = calc((lp + rp) / 2, rp, false, a);
  if(!flag){
    return (a[left] > a[right] ? left : right);
  } else {
    return (a[left] > a[right] ? right : left);
  }
}

int main(){
  int n;
  cin >> n;
  ll player_num = pow(2, n);
  vector<int> a(player_num);
  for(auto &ai: a) cin >> ai;
  cout << calc(0, player_num, true, a) + 1 << endl;
}