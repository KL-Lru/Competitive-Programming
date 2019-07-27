#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define P pair<int,int>
const ll INF=1e+9;
P p[90001];
ll dist[200000];

int dst(P l, P r){
  return abs(l.first-r.first)+abs(l.second - r.second);
}

int main(){
  int h,w,d,a;
  cin >> h >> w >> d;
  for(int i=1;i<=h;i++){
    for(int j=1;j<=w;j++){
      cin >> a;
      p[a]=P(i,j);
    }
  }

  for(int a = h * w - d; a > 0; a--){
      dist[a] = dist[a+d] + dst(p[a], p[a+d]);
  }

  int q;
  cin>>q;
  int l,r;
  for(int i=0;i<q;i++){
    cin>>l>>r;
    cout << dist[l] - dist[r] << endl;
  }
}