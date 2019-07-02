#include<bits/stdc++.h>
using namespace std;
#define inf 10e+8
int n;
int f[100][10];
int p[100][11];
int t[10]={};
int cnt(int n){
  int c=0;
  for(int i=0;i<10;i++){
    if(f[n][i]&&t[i]) c++;
  }
  return c;
}

void next(){
  t[0]+=1;
  for(int i=0;i<9;i++){
    t[i+1]+=t[i]/2;
    t[i]=t[i]%2;
  }
}

int main(){
  int max=-inf;
  cin>>n;
  for(int i=0;i<n;i++)
    for(int j=0;j<10;j++)
      cin>>f[i][j];
  for(int i=0;i<n;i++)
    for(int j=0;j<11;j++)
      cin>>p[i][j];
  t[0]=1;
  while(t[9]!=2){
    int tmp=0;
    for(int i=0;i<n;i++){
      tmp+=p[i][cnt(i)];
    }
    if(max<tmp)max=tmp;
    next();
  }
  cout<<max<<endl;
  return 0;
}
