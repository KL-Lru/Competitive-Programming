#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;
  string ans="YES";
  cin>>a>>b>>c;
  if(a>c) ans="NO";
  if(a+b<c) ans="NO";
  cout<<ans<<endl;
  return 0;
}