#include<bits/stdc++.h>
using namespace std;
#define nmax 100000
int main(){
  int n,ans=0,tmp,cnt=1;
  int a[nmax];
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>a[i];
  sort(a,a+n);
  tmp=a[0];
  for(int i=1;i<n;i++){
    if(a[i]==tmp) cnt++;
    else{
      if(cnt%2) ans++;
      cnt=1;
      tmp=a[i];
    }
  }
  if(cnt%2) ans++;
  cout<<ans<<endl;
  return 0;
}