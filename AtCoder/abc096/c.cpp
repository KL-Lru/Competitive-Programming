#include<bits/stdc++.h>
using namespace std;
int main(){
  int h,w;
  char f[53][53];
  bool flag=true;
  cin>>h>>w;
  for(int i=0;i<=h+1;i++){
    for(int j=0;j<=w+1;j++){
      if(i==0||j==0||i==h+1||j==w+1){
        f[i][j]='.';
        continue;
      }
      cin>>f[i][j];
    }
  }
  for(int i=1;i<=h&&flag;i++){
    for(int j=1;j<=w&&flag;j++){
      if(f[i][j]=='#'&&f[i-1][j]=='.'&&f[i+1][j]=='.'&&f[i][j-1]=='.'&&f[i][j+1]=='.')
        flag=false;
    }
  }
  cout<<(flag?"Yes":"No")<<endl;
}