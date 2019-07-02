#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,x,cnt = 0;
  cin>>n>>x;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  for(int i=0;i<n;i++){
    x -= a[i];
    if(x >= 0) cnt++;
    else break;
  }
  if(x>0) cnt--;
  cout << cnt << endl;
}