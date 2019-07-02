#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c,cnt=0;
  cin>>a>>b>>c;
  if(a%2!=b%2&&a%2!=c%2){ 
    a--;cnt++;
  }else if(a%2!=b%2&&b%2!=c%2){ 
    b--;cnt++;
  }else if(a%2!=c%2&&b%2!=c%2){ 
    c--;cnt++;
  }
  int mx=max({a,b,c});
  cnt+=(mx-a)/2;
  cnt+=(mx-b)/2;
  cnt+=(mx-c)/2;
  cout<<cnt<<endl;
}
