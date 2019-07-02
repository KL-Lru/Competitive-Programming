#include<bits/stdc++.h>
using namespace std;
const int NMAX = 100000;
bool used[NMAX];

void dfs(vector<vector<int> >& edge, int node){
    if(used[node]) return;
    used[node] = true;
    for(auto e : edge[node]){
        if(used[e]) continue;
        dfs(edge, e);
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    int x, y, z;
    vector< vector<int> > edge(n, vector<int>());
    for(int i=0;i<n;i++) used[i] = false;
    for(int i=0;i<m;i++){
        cin >> x >> y >> z;
        --x;--y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }

    int ans = 0;
    for(int i=0;i<n;i++){
        if(!used[i]){
            ans++;
            dfs(edge, i);
        }
    }
    cout << ans << endl;
}