#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a[101],sum=0,ans=0,t;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
  }
  t=round(sum/(double)n);
  for(int i=0;i<n;i++) ans+=pow(a[i]-t,2);
  cout<<ans<<endl;
  return 0;
}