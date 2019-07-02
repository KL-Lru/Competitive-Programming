#include<bits/stdc++.h>
using namespace std;
#define mx 200000
int main(){
  int n,m,a,b;
  bool from1[mx+1]={},ton[mx+1]={},f=false;
  cin>>n>>m;
  for(int i=0;i<m;i++){
    cin>>a>>b;
    if(a==1)from1[b]=true;
    if(b==n)ton[a]=true;
  }
  for(int i=1;i<n&&!f;i++){
    if(from1[i]&&ton[i])
      f=true;
  }
  cout<<(f?"POSSIBLE":"IMPOSSIBLE")<<endl;
  return 0;
}