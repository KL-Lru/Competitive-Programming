#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  sort(a.begin(), a.end());
  double ans = 0;
  for(int i=0;i<n;i++) {
    ans += 1/(double)a[i];
  }
  cout << setprecision(15) << 1/ans << endl;
}