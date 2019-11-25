#include <bits/stdc++.h>
using namespace std;
void dfs(int node, int w, vector<vector<int>> &edge, vector<int> &weight, vector<bool> &used){
    if(used[node]) return;
    weight[node] += w;
    used[node] = true;
    for(auto e: edge[node]){
        if(used[e]) continue;
        dfs(e, weight[node], edge, weight, used);
    }
} 

int main(){
    int n,q;
    cin >> n >> q;
    vector<vector<int>> edge(n, vector<int>());
    vector<int> weight(n,0);
    vector<bool> used(n, false);
    for(int i=0;i<n-1;i++){
        int a,b;
        cin >> a >> b;
        a--;b--;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    for(int i=0;i<q;i++){
        int p,x;
        cin >> p >> x;
        p--;
        weight[p] += x;
    }
    dfs(0, 0, edge, weight, used);
    for(int i=0;i<n;i++){
        cout << weight[i] << " ";
    }
    cout << endl;
}