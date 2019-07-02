#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  string s,t;
  cin>>n>>s>>t;
  int ans=n*2;
  bool f;
  for(int i=0;i<n;i++){
    f=true;
    for(int j=0;i+j<n&&f;j++){
      if(s[i+j]!=t[j]) f=false;
    }
    if(f){
      ans=i+n;
      break;
    }
  }
  cout<<ans<<endl;
  return 0;
}