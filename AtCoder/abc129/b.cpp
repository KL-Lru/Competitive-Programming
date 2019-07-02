#include<bits/stdc++.h>
using namespace std;
const int INF = 1e+8;

int main(){
  int n;
  cin >> n;
  vector<int> w(n);
  int diff = INF, l = 0, r = 0;
  for(int i=0;i<n;i++){
      cin >> w[i];
      r += w[i];
  }
  for(int i=0;i<n;i++){
      l += w[i];
      r -= w[i];
      diff = min(diff, abs(l-r));
  }
  cout << diff << endl;
}