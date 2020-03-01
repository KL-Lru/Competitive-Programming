#include <bits/stdc++.h>
using namespace std;

#define MAX_N 100001
int par[MAX_N], rnk[MAX_N];

/* 初期化 */
void init(int n){
  for(int i=0;i<n;i++){
    par[i]=i;
    rnk[i]=0;
  }
}

/* 根ノード探索 */
int find(int x){
  if(par[x] == x) return x;
  else{
    /* path compression */
    par[x] = find(par[x]);
    return par[x];
  }
}

/* 併合 */
void unite(int x, int y){
  int px = find(x), py = find(y);
  if(px == py) return;
  /* union by rnk */
  if(rnk[px] > rnk[py]) par[px] = py;
  else par[py] = px;
  if(rnk[px] == rnk[py]) rnk[x]++;
}

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    init(n);
    int a , b;
    vector<int> fri(n);
    for(int i = 0; i< m; i++){
        cin >> a >> b;
        fri[--a]++;
        fri[--b]++;
        unite(a,b);
    }
    map<int,int> g;
    for(int i = 0; i< n; i++){
        g[find(i)] ++;
    }
    vector<int> ans(n);
    for(int i = 0; i< n; i++){
        ans[i] = g[find(i)] - (1+fri[i]); // 自分と友達は抜く
    }
    int c, d;
    for(int i=0;i<k;i++){
        cin >> c >> d;
        if(find(--c) == find(--d)){
            ans[c]--;
            ans[d]--;
        }
    }
    for(auto v: ans){
        cout << v << " ";
    }
    cout << endl;
}