#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,n;
string x;
cin>>a>>b>>n;
cin>>x;
for(int i=0;i<n;i++){
  if(x[i]=='S'){
    a-=(a==0?0:1);
  }
  if(x[i]=='C'){
    b-=(b==0?0:1);
  }
  if(x[i]=='E'){
    if(a>=b)
      a-=(a==0?0:1);
    else
      b-=(b==0?0:1);
  }
}
cout<<a<<endl<<b<<endl;
}