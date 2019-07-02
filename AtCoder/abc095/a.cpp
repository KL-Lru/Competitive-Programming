#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  int val=700;
  cin>>s;
  for(int i=0;i<3;i++){
    if(s[i]=='o') val+=100;
  }
  cout<<val<<endl;
  return 0;
}