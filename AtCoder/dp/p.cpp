#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using pl = pair<ll,ll>;

const ll MOD = 1e+9+7;

bool used[100000] = {};
pl dp[100000] = {};

pl solve(ll node, vector<vector<int>>& edge){
    if(used[node]) return dp[node];
    used[node] = true;
    ll wcnt = 1, bcnt = 1;
    for(auto dst: edge[node]){
        if(used[dst]) continue;
        ll white, black;
        tie(white, black) = solve(dst, edge);
        wcnt *= white + black; // white 
        bcnt *= white;         // black
        wcnt %= MOD;
        bcnt %= MOD;
    }
    dp[node] = make_pair(wcnt, bcnt);
    return dp[node];
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> edge(n, vector<int>());
    int x,y;
    for(int i=0;i<n-1;i++){
        cin >> x >> y;
        x--; y--;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    ll white, black;
    tie(white, black) = solve(0, edge);
    cout << (white + black) % MOD << endl;
}