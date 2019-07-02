#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,mx = 0;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
	  mx = max(abs(a[i]-a[j]), mx);
  cout << mx << endl;
}