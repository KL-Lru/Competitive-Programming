#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> c(n);
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin >> c[i];
  }
  v[0] = 1;
  for(int i=1;i<n;i++){
    int mx = 0, dst = c[i];
    for(int j=0;j<i;j++){
      if(c[j] < dst) mx = max(mx, v[j]);
    }
    v[i] = mx + 1;
  }
  int mx = 0;
  for(int i=0;i<n;i++){
    mx = max(mx, v[i]);
  }
  cout << n - mx << endl;
}
