#include<bits/stdc++.h>
using namespace std;
#define inf 1e+9
int b[2][3],c[3][2];

int solve(int depth,int f[],int pl){
  bool fin=true;
  int score=depth%2?inf:0,fi[9];
  for(int i=0;i<9;i++) fi[i]=f[i];
  if(pl!=-1)fi[pl]=depth%2==1?1:-1;
  for(int i=0;i<9;i++)
    if(fi[i]==0){
      fin=false;
      if(depth%2) score=min(solve(depth+1,fi,i),score);
      else score=max(solve(depth+1,fi,i),score);
    }
  if(fin){
    score=0;
    for(int i=0;i<2;i++)
      for(int j=0;j<3;j++)
        score+=b[i][j]*abs(fi[i*3+j]+fi[i*3+j+3])/2;
    for(int i=0;i<3;i++)
      for(int j=0;j<2;j++)
        score+=c[i][j]*abs(fi[i*3+j]+fi[i*3+j+1])/2;
  }
  return score;
}


int main(){
  int total=0;
  for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
      cin>>b[i][j];
      total+=b[i][j];
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
      cin>>c[i][j];
      total+=c[i][j];
    }
  }
  int f[9]={};
  int res=solve(0,f,-1);
  cout<<res<<endl<<total-res<<endl;
  return 0;
}