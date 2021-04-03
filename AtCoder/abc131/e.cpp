#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, k;
  cin >> n >> k;
  int mx = (n - 2)*(n - 1) / 2;
  int diff = mx - k;
  if(diff < 0) {
    cout << -1 << endl;
    return 0;
  }
  cout << n - 1 + mx - k << endl;
  for(int i=1; i<n; i++) cout << i << " " << n << endl;
  int cnt = 0;
  for(int i=1; i<n && cnt<diff; i++){
    for(int j=i+1; j<n && cnt<diff; j++){
      cout << i << " " << j << endl;
      cnt++;
    }
  }
}