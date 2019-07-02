#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> a;
  int n;
  cin>>n;
  a.push_back(n);
  cin>>n;
  a.push_back(n);
  cin>>n;
  a.push_back(n);
  sort(a.begin(),a.end());
  int ans = abs(a[0]-a[1])+abs(a[1]-a[2]);
  cout<<ans<<endl;
}