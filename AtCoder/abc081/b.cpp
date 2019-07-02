#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,cnt=0;
  int a[200]={};
  bool f=true;
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>a[i];
  while(f){
    for(int i=0;i<n;i++){
      if(a[i]%2==1){
        f=false;
        break;
      }
      else a[i]/=2;
    }
    if(f)
      cnt++;
  }
  cout<<cnt<<endl;
  return 0;
}