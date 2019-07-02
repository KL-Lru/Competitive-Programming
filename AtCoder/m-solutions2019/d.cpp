#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void dfs(int node, vector<vector<int>>& edge, vector<int> &val, priority_queue<int, vector<int>, greater<int>>& c){
    if (val[node] != -1 || c.empty())
        return;
    val[node] = 0; // 仮置き
    for(auto tar: edge[node]){
        if(val[tar] == -1)
            dfs(tar, edge, val, c);
    }
    val[node] = c.top();
    c.pop();
}

int main(){
    int n,a,b,x;
    cin >> n;
    vector<vector<int>> edge(n, vector<int>());
    vector<int> val(n, -1);
    priority_queue<int, vector<int>, greater<int>> c;
    for (int i = 0; i < n-1; i++){
        cin >> a >> b;
        a--;
        b--;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }

    ll ans = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        c.push(x);
        ans += x;
    }
    dfs(0, edge, val, c);
    cout << ans - val[0] << endl;
    for (auto node: val){
        cout << node << " ";
    }
    cout << endl;
}