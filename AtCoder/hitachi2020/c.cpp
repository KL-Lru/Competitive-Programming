#include <bits/stdc++.h>
using namespace std;

pair<int,int> dfs(int node, int depth, vector<vector<int>>& edge, vector<int>& val){
    if(val[node] != -1) return {0,0};
    val[node] = depth%2;
    pair<int,int> ret{(depth%2 == 0?1:0), (depth%2 == 1?1:0)};
    for(auto &e: edge[node]){
        if(val[e] != -1) continue;
        auto res = dfs(e, depth+1, edge, val);
        ret.first += res.first;
        ret.second += res.second;
    }
    return ret;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> edge(n);
    vector<vector<int>> new_edge(n);
    int a,b;

    for(int i=0;i<n-1;i++){
        cin >> a >> b;
        a--;b--;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    int f, s;
    vector<int> val(n, -1);
    tie(f,s) = dfs(0, 0, edge, val);
    cout << endl;
    int st[3] {1,2,3};
    if(f <= n / 3){
        for(int i=0;i<n;i++){
            if(val[i] == 0){
                val[i] = st[2];
                st[2] += 3;
            }else{
                int tar = (st[0] < st[1]?0:1);
                tar = (st[tar] <= n?tar:2);
                val[i] = st[tar];
                st[tar] += 3;
            }
        }
    }else if(s <= n / 3){
        for(int i=0;i<n;i++){
            if(val[i] == 1){
                val[i] = st[2];
                st[2] += 3;
            }else{
                int tar = (st[0] < st[1]?0:1);
                tar = (st[tar] <= n?tar:2);
                val[i] = st[tar];
                st[tar] += 3;
            }
        }
    }else{
        for(int i=0;i<n;i++){
            if(val[i] == 0){
                int tar = (st[0] <= n?0:2);
                val[i] = st[tar];
                st[tar] += 3;
            }else{
                int tar = (st[1] <= n?1:2);
                val[i] = st[tar];
                st[tar] += 3;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout << val[i] << " ";
    cout << endl;
}

