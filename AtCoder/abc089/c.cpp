#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll cnt[5]={},ans=0;
  int n;
  string s;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s;
    switch(s[0]){
      case 'M':cnt[0]++;break;
      case 'A':cnt[1]++;break;
      case 'R':cnt[2]++;break;
      case 'C':cnt[3]++;break;
      case 'H':cnt[4]++;break;
    }    
  }
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      if(i==j) continue;
      for(int k=0;k<5;k++){
        if(i==k||j==k) continue;
        ans+=cnt[i]*cnt[j]*cnt[k];
      }
    }
  }
  cout<<(ans/6)<<endl;
  return 0;
}