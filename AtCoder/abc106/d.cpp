#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n,m,q;
  int dst[501][501]={};
  int x,y;
  cin>>n>>m>>q;
  for(int i=0;i<m;i++){
    cin>>x>>y;
    dst[x][y]++;
  }
  // i行j列更新
  for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j++){
      dst[i][j]+=dst[i][j-1];
    }
  }
  for(int i=n-1;i>0;i--){
    for(int j=i;j<=n;j++){
      dst[i][j]+=dst[i+1][j];
    }
  }
  for(int i=0;i<q;i++){
    cin>>x>>y;
    cout<<dst[x][y]<<endl;
  }
}
