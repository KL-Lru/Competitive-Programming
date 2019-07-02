#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,ac=0,bc=0,cc=0;
  cin>>n;
  long long cnt=0;
  vector<int> a(n),b(n),c(n);
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n;i++) cin>>b[i];
  for(int i=0;i<n;i++) cin>>c[i];
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  sort(c.begin(),c.end());
  for(int i=0;i<n;i++) 
    cnt+=(lower_bound(a.begin(),a.end(),b[i])-a.begin())*(c.size()-(upper_bound(c.begin(),c.end(),b[i])-c.begin()));
  cout<<cnt<<endl;
  return 0;
}