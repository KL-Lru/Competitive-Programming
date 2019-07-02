#include<bits/stdc++.h>
#include<tuple>
using namespace std;
#define P pair<int,int>
#define MOD 1000000007
int main(){
  int h,w;
  char a[1001][1001];
  int dp[1001][1001] = {};
  queue<P> q;
  cin >> h >> w;
  for(int x=1;x<=h;x++){
    for(int y=1;y<=w;y++){
      cin >> a[x][y];
    }
  }
  q.push(P(1,1));
  dp[1][1] = 1;
  while(!q.empty()){
    int x,y;
    tie(x,y) = q.front();
    q.pop();
    if(a[x][y] == '#') continue;
    a[x][y] = '#';
    dp[x][y] = (((dp[x][y] + dp[x-1][y]) % MOD) + dp[x][y-1]) % MOD;
    if(x+1 <=h) q.push(P(x+1,y));
    if(y+1 <=w) q.push(P(x,y+1));
  }
  cout << dp[h][w] << endl;
}