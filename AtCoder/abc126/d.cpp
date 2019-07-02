#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
const int NMAX = 100000;
int color[NMAX];
bool used[NMAX];

void dfs(vector<vector<P>>& edge, int node, int dst){
    if(dst%2 == 0) color[node] = 0;
    if(used[node]) return;
    used[node] = true;
    for(auto e : edge[node]){
        if(used[e.first]) continue;
        dfs(edge, e.first, dst + e.second);
    }
}

int main(){
    int n;
    cin >> n;
    vector<vector<P>> edge(n, vector<P>());
    int u, v, w;
    for(int i=0;i<n;i++){
        color[i] = -1;
        used[i]  = false;
    }
    for(int i=0;i<n-1;i++){
        cin >> u >> v >> w;
        u--; v--;
        edge[u].push_back(make_pair(v,w));
        edge[v].push_back(make_pair(u,w));
    }
    dfs(edge, 0, 0);
    for(int i=0;i<n;i++) cout << -color[i] << endl;
}