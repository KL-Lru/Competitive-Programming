#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n;
  ll sum = 0;
  ll res1 = 0, res2 = 0;
  cin>>n;
  vector<int> a(n);
  for(int i=1;i<=n;i++){
    cin>>a[i-1];
    a[i-1]-=i;
  }
  sort(a.begin(),a.end());
  int b1=a[n/2];
  int b2=a[n/2-1]; 
  for(int i=1;i<=n;i++){
    res1+=abs(a[i-1]-b1);
    res2+=abs(a[i-1]-b2);
  }
  cout<<(res1>res2?res2:res1)<<endl;
}