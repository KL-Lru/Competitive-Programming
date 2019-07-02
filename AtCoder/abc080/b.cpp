#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m=0,tn;
  cin>>n;
  tn=n;
  for(int i=0;i<9;i++){
    m+=tn%10;
    tn/=10;
  }
  cout<<(n%m==0?"Yes":"No")<<endl;
  return 0;
}