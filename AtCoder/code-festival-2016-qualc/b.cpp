#include<bits/stdc++.h>
using namespace std;
int main(){
  int k,t,mx = 0;
  cin >> k >> t;
  vector<int> a(t);
  for(int i=0;i<t;i++){
    cin >> a[i];
    mx = max(mx, a[i]);
  }
  cout << max(mx-(k-mx)-1, 0) << endl;
}