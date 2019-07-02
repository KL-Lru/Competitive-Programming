#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n;
  ll a[3001]={},lc=1,ans=0;
  vector<ll> v;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
    ans+=a[i]-1;
  }
  cout<<ans<<endl;
}