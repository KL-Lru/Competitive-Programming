#include<bits/stdc++.h>
#include<tuple>
using namespace std;
#define ll long long
vector<int> edge[100001];
int par[100001]={};


int main(){
  int n, m;
  int a,b;
  cin >> n >> m;
  int h[100001] = {};
  for(int i=0;i<n+m-1;i++){
    cin >> a >> b;
    edge[a].push_back(b);
    h[b]++;
  }
  int root;
  for(int i=1;i<=n;i++){
    if(h[i] == 0) root = i;
  }

  queue<int> q;
  
  for(int i=0;i<edge[root].size();i++){
    h[edge[root][i]]--;
    if(h[edge[root][i]] == 0){
      q.push(edge[root][i]);
      par[edge[root][i]] = root;
    }
  }
  par[root] = 0;
  while(!q.empty()){
    int crr=q.front();q.pop();
    for(int i=0;i<edge[crr].size();i++){
      h[edge[crr][i]]--;
      if(h[edge[crr][i]] == 0){
        q.push(edge[crr][i]);
        par[edge[crr][i]] = crr;
      }
    }
  }
  for(int i=1;i<=n;i++){
    cout << par[i]<< endl;
  }
}