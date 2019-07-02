#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n, m;
  int x[100000];
  ll sm = 0;
  priority_queue<int> q;
  cin >> n >> m;
  for(int i=0;i<m;i++) cin >> x[i];
  sort(x,x+m);
  for(int i=0;i<m-1;i++) q.push(x[i+1]-x[i]);
  for(int i=0;i<n-1 && !q.empty();i++) q.pop();
  while(!q.empty()){
    sm += q.top();q.pop();
  }
  cout << sm << endl;
}