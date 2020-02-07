#include <bits/stdc++.h>
using namespace std;
const int INF = 1e+9;
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> dist(n, vector<int>(n, INF));
    int a,b,t;
    for(int i=0;i<m;i++){
        cin >> a >> b >> t;
        a--;b--;
        dist[a][b] = min(t, dist[a][b]);
        dist[b][a] = min(t, dist[b][a]);
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    int ans = INF;
    for(int i=0;i<n;i++){
        int mx = 0;
        for(int j=0;j<n;j++){
            if(i == j) continue;
            mx = max(mx, dist[i][j]);
        }
        ans = min(ans, mx);
    }
    cout << ans << endl;
}