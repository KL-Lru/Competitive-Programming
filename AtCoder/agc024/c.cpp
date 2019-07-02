#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n;
  ll a[200001]={};
  ll ans=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  if(a[0]!=0){
    cout<<-1<<endl;
    return 0;
  }
  for(int i=1;i<n;i++){
    if(a[i-1]+1<a[i]){
      ans=-1;break;
    }
    if(a[i-1]+1==a[i]){
      ans+=1;
    }
    else{
      ans+=a[i];
    }
  }
  cout<<ans<<endl;
}