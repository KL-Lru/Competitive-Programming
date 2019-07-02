#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll h, w, k;
  cin >> h >> w >> k;
  ll rows[h], cols[w];
  ll base = (h * w - k + 1)/2;
  for(int i=0;i<h;i++) rows[i] = w;
  for(int i=0;i<w;i++) cols[i] = h;
  int r,c;
  for(int i=0;i<k;i++){
    cin >> r >> c;
    rows[--r]--;
    cols[--c]--;    
  }
  ll ans = 0;
  ll rcnt = 0, rbase = -1, ccnt = 0, cbase = -1;
  for(int i=0;i<h;i++){
    rcnt += rows[i];
    if(base <= rcnt){
      rbase = i;
      break;
    }
  }
  for(int i=0;i<w;i++){
    ccnt += cols[i];
    if(base <= ccnt){
      cbase = i;
      break;
    }
  }
  // cout << "base: " << rbase << ", " << cbase << endl;
  for(int i=0;i<h;i++) ans += abs(i-rbase)*rows[i];
  for(int i=0;i<w;i++) ans += abs(i-cbase)*cols[i];
  cout << ans << endl;
}