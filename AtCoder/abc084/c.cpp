#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,c,s,f,t[501]={};
  cin>>n;
  for(int i=1;i<n;i++){
    cin>>c>>s>>f;
    for(int j=1;j<=i;j++)
      t[j]=c+max(s,(t[j]+f-(t[j]%f==0?f:t[j]%f)));
  }
  for(int i=1;i<=n;i++) cout<<t[i]<<endl;
  return 0;
}