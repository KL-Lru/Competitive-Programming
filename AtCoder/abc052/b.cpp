#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,mx=0,x=0;
  string s;
  cin>>n;
  cin>>s;
  for(int i=0;i<n;i++){
    if(s[i]=='I'){
      x++;
      mx=max(x,mx);
    }else{
      x--;
    }
  }
  cout<<mx<<endl;
}