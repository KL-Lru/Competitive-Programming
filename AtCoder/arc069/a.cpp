#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n,m;
  cin>>n>>m;
  if(m<=n*2){
    cout<<m/2<<endl;
  }else{
    if(m%2==1) m--;
    cout<<(n+(m-2*n)/4)<<endl;
  }
}

