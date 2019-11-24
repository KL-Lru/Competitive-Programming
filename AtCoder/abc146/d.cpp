#include <bits/stdc++.h>
using namespace std;
using p = pair<int,int>;

void dfs(int node, int cor, vector<vector<int>> &edge, map<p, int> &ans, vector<bool> &used){
    used[node] = true;
    int c = (cor == 1?2:1);
    for(auto e: edge[node]){
        if(used[e]) continue;
        ans[{node, e}] = c;
        ans[{e, node}] = c;
        dfs(e, c, edge, ans, used);
        c = (c+1 != cor? c+1: c+2);
    }

}

int main(){
    int n;
    cin >> n;
    vector<p> e(n);
    vector<vector<int>> edge(n, vector<int>());
    for(int i=0;i<n-1;i++){
        cin >> e[i].first >> e[i].second;
        e[i].first--; e[i].second--;
        edge[e[i].first].push_back(e[i].second);
        edge[e[i].second].push_back(e[i].first);
    }
    int k = 0;
    for(int i=0;i<n;i++){
        k = max((int)edge[i].size(), k);
    }
    map<p, int> ans;
    vector<bool> used(n, false);
    dfs(0, 0, edge, ans, used);

    cout << k << endl;
    for(int i=0;i<n-1;i++){
        cout << ans[e[i]] << endl;
    }
}