#include<bits/stdc++.h>
using namespace std;
int n,c;
int mx=0;
int ti[35][200000];

int cnt(int nn){
  int ct=0;
  for(int i=1;i<=c;i++)
    if(ti[i][nn]>0) ct++;
  return ct;
}

int main(){

  cin>>n>>c;
  int s,t,cc,tp;
  for(int i=1;i<=c;i++)
    for(int j=1;j<200001;j++)
      ti[i][j]=0;
  for(int i=0;i<n;i++){
    cin>>s>>t>>cc;
    ti[cc][s*2-1]=1;
    ti[cc][t*2]=-1;
  }
  for(int i=1;i<=c;i++)
    for(int j=1;j<200001;j++)
      ti[i][j]+=ti[i][j-1];
  for(int i=1;i<200001;i++){
    tp=cnt(i);
    if(mx<=tp)mx=tp;
  }
  cout<<mx<<endl;
  return 0;
}
