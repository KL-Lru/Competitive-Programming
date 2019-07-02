#include<bits/stdc++.h>
using namespace std;
#define nmax 100000
int main(){
  int n,a,mx=0;
  int d[nmax+5]={};
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a;
    d[a]++;
    if(a!=0) d[a-1]++;
    d[a+1]++;
  }
  for(int i=0;i<nmax+2;i++) mx=max(mx,d[i]);
  cout<<mx<<endl;
  return 0;
}