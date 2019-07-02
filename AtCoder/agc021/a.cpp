#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n;
  int cnt=0,last;
  bool f=true;
  cin>>n;
  while(n!=0){
    if(n/10==0) last=n;
    else if(n%10!=9) f=false;
    cnt++;
    n/=10;
  }
  cout<<((cnt-1)*9+(f?last:last-1))<<endl;
  return 0;
}

