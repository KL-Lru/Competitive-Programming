#include<bits/stdc++.h>
using namespace std;
#define mx 200000
#define P pair<int,int>
int main(){
  int n,k,in,cnt=0;
  int a[mx+1]={};
  priority_queue<P,vector<P>,greater<P> > q;
  cin>>n>>k;
  for(int i=0;i<n;i++){
    cin>>in;
    a[in]++;
  }
  for(int i=1;i<=n;i++){
    if(a[i]>0)
      q.push(P(a[i],i));
  }
  while(!q.empty()&&q.size()>k){
    P tp=q.top(); q.pop();
    cnt+=tp.first;
  }
  cout<<cnt<<endl;
  return 0;
}