#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,k;
  cin>>a>>b>>k;
  for(int i=a;i<a+k&&i<=b;i++) cout<<i<<endl;
  if(a+k-1>=b-k+1)
    for(int i=a+k;i<=b;i++)cout<<i<<endl;
  else  for(int i=b-k+1;i<=b;i++)cout<<i<<endl;
}