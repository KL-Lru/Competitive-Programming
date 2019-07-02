#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  int t;
  cin>>s>>t;
  cout<<s[(t-1)/5]<<s[(t-1)%5]<<endl;
  return 0;
}