#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int era[55556];
  vector<int> prime;
  for(int i=2;i<=55555;i++){
    era[i]=i;
  }
  for(int i=2;i<=55555;i++){
    if(era[i]==-1)
      continue;
    if(era[i]%5==1)
      prime.push_back(era[i]);
    for(int j=2;j*era[i]<=55555;j++){
      era[j*era[i]]=-1;
    }
  }
  for(int i=0;i<n-1;i++)
    cout<<prime[i]<<" ";
  cout<<prime[n-1]<<endl;
}