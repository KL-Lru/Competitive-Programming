#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n, sm = 0, mx = 0;
  int l[11] = {};
  cin >> n;
  for(int i=0;i<n;i++) cin >> l[i];
  sort(l, l+n, greater<int>());
  mx = l[0];
  for(int i=1;i<n;i++) sm += l[i];
  cout << (mx < sm?"Yes":"No") << endl;
}