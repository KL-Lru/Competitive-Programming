#include<bits/stdc++.h>
using namespace std;
#define inf 1e+9

int main(){
int n,m,a[50],b[50],ab[51][51],tmp[51][51];
for(int i=0;i<51;i++)
  for(int j=0;j<51;j++) ab[i][j]=inf;
cin>>n>>m;
for(int i=0;i<m;i++){
  cin>>a[i]>>b[i];
  ab[a[i]][b[i]]=1;ab[b[i]][a[i]]=1;
}
int ans=0;
for(int l=0;l<m;l++){
  for(int ti=0;ti<=n;ti++)
    for(int tj=0;tj<=n;tj++)
      tmp[ti][tj]=ab[ti][tj];
  tmp[a[l]][b[l]]=inf;tmp[b[l]][a[l]]=inf;
  for(int k=1;k<=n;k++)
    for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)
        tmp[i][j]=min(tmp[i][j],tmp[i][k]+tmp[k][j]);
  if(tmp[a[l]][b[l]]==inf||tmp[b[l]][a[l]]==inf)ans++;
}
cout<<ans<<endl;
return 0;
}