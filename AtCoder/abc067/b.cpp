#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k,x,ans=0;
  vector<int> v;
  cin>>n>>k;
  for(int i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
  }
  sort(v.begin(),v.end(),greater<int>());
  for(int i=0;i<k;i++){
    ans+=v[i];
  }
  cout<<ans<<endl;
}

