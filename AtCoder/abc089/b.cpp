#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,cnt=0;
  char s;
  bool f[4]={};
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s;
    if(s=='P'){if(!f[0])cnt++;f[0]=true;}
    if(s=='Y'){if(!f[1])cnt++;f[1]=true;}
    if(s=='W'){if(!f[2])cnt++;f[2]=true;}
    if(s=='G'){if(!f[3])cnt++;f[3]=true;}
  }
  cout<<(cnt==3?"Three":"Four")<<endl;
}