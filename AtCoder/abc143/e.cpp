#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e+13;
int main(){
    int n, m, l;
    cin >> n >> m >> l;
    ll dist[300][300]{};
    for(int x = 0; x < n; x++)
        for(int y = 0; y < n; y++)
            dist[x][y] = INF;
    for(int i  = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        --a;--b;
        dist[a][b] = c;
        dist[b][a] = c;
    }
    for(int k = 0; k < n; k ++)
        for(int i = 0; i < n; i ++)
            for(int j = 0; j < n; j++)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]); 
    for(int x = 0; x < n; x++)
        for(int y = 0; y < n; y++)
            dist[x][y] = (dist[x][y] <= l?1LL:INF);
    for(int k = 0; k < n; k ++)
        for(int i = 0; i < n; i ++)
            for(int j = 0; j < n; j++)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]); 
    int q;
    cin >> q;
    for(int i  = 0; i < q; i++){
        int s, t;
        cin >> s >> t;
        cout << dist[--s][--t]%INF - 1 << endl;
    }

}