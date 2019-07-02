#include<bits/stdc++.h>
using namespace std;

int main(){
  int h,w;
  cin>>h>>w;
  char m[51][51];
  for(int i=0;i<h;i++)
    for(int j=0;j<w;j++){
      scanf(" %c",&m[i][j]);
      if(m[i][j]=='.') m[i][j]='0';
    }
  for(int i=0;i<h;i++)
    for(int j=0;j<w;j++){
      if(m[i][j]=='#'){
        for(int a=(i==0?0:-1);a<=(i==h-1?0:1);a++){
          for(int b=(j==0?0:-1);b<=(j==w-1?0:1);b++){
            if(m[i+a][j+b]!='#') m[i+a][j+b]++;
          }
        }
      }
    }
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cout<<m[i][j]<<flush;
    }
    cout<<endl;
  }
}