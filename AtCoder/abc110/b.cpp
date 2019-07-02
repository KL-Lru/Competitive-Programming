#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n,m,x0,y0;
  cin>>n>>m>>x0>>y0;
  vector<int> x(n),y(m);
  for(int i=0;i<n;i++)
    cin>>x[i];
  for(int i=0;i<m;i++)
    cin>>y[i];
  sort(x.begin(),x.end(),greater<int>());
  sort(y.begin(),y.end());
  cout<<(max(x[0],x0)>=min(y[0],y0)?"War":"No War")<<endl;
}