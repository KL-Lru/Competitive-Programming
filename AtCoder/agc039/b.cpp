#include<bits/stdc++.h>
using namespace std;
using P = pair<int,int>;

int dfs(int node, vector<vector<int>>& edge, vector<int>& dst, vector<bool>& used){
    if(used[node]) return -1;
    used[node] = true;
    int ret = dst[node];
    for(auto e:edge[node]){
        if(e == node) continue;
        ret = max(ret, dfs(e, edge, dst, used));
    }
    return ret;
}

int main(){
    int n;
    cin >> n;
    char c;
    vector<vector<int>> edge(n, vector<int>());
    for(int x = 0; x < n; x++){
        for(int y = 0; y < n; y++){
            cin >> c;
            if(c == '1'){
                edge[x].push_back(y);
                edge[y].push_back(x);
            }
        }
    }

    int ans = 0;

    for(int i=0;i<n;i++){
        vector<int> dst(n, -1);
        queue<P> q;
        q.push(make_pair(i,0));
        int tar, depth;
        while(!q.empty()){
            tie(tar, depth) = q.front();q.pop();
            // cout << i << ": " << tar << ". " << depth << endl;  
            if(dst[tar] == -1 ){
                dst[tar] = depth;
                for(auto e: edge[tar]){
                    if(dst[e] != -1 && dst[e] == depth - 1) continue;
                    q.push(make_pair(e, depth+1));
                }
            }else if(dst[tar] != depth){
                cout << -1 << endl;
                return 0;
            } // dst same -> nothing to do
        }

        int first = 0, second = 0;
        vector<bool> used(n, false);
        used[i] = true;
        for(auto e: edge[i]){
            int val = dfs(e, edge, dst, used);
            if(val >=first){
                second = first;
                first = val;
            }else if(val > second){
                second = val;
            }
        }
        ans = max(ans, first+second+1);
    }
    cout << ans << endl;

}