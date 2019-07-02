#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,tmp,sum=0;
  vector<int> r;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>tmp;
    r.push_back(tmp);
  }
  sort(r.begin(),r.end(),greater<int>());
  for(int i=0;i<n;i++){
    sum += (i%2 == 0? r[i]*r[i] : -r[i]*r[i]);
  }
  cout<<fixed<<setprecision(15)<<sum*M_PI<<endl;
}