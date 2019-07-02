#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n,a;
  vector<ll> v;
  set<ll> s;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a;
   	if(s.find(a)==s.end()){
      s.insert(a);
    }else{
      v.push_back(-a);
      s.erase(a);
    }
  }
  sort(v.begin(),v.end());
  cout<<(v.size()>=2?v[0]*v[1]:0)<<endl;
  return 0;
}