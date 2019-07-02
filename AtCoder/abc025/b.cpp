#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a,b,x,p = 0;
  string d;
  cin>>n>>a>>b;
  for(int i=0;i<n;i++){
    cin>>d>>x;
    if(x < a) x = a;
    if(x > b) x = b;
    if(d == "West") p += x;
    if(d == "East") p -= x;
  }
  if(p == 0) cout<<0<<endl;
  else if(p > 0) cout<<"West "<<p<<endl;
  else cout<<"East "<<-p<<endl;
}
