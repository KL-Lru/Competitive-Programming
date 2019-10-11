#include<bits/stdc++.h>
using namespace std;
const int INF = 1e+8;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(m), b(m), c(m,0);
    for(int i=0;i<m;i++){
        cin >> a[i] >> b[i];
        int tc;
        for(int j=0;j<b[i];j++){
            cin >> tc;
            c[i] += (1 << (tc-1));
        }
    }

    static int dp[1001][1 << 12]; // dp[i番目までの鍵][開けられた箱] = 最小金額
    for(int i=0;i<=m;i++){
        for(int j=0;j<(1 << n); j++){
            dp[i][j] = INF;
        }
    }
    dp[0][0] = 0;
    for(int i=1;i<=m;i++){
        for(int j=0;j<(1 << n);j++){
            if(dp[i-1][j] == INF) continue;
            dp[i][(j | c[i-1])] = min(dp[i][(j | c[i-1])],dp[i-1][j] + a[i-1]);
            dp[i][j] = min(dp[i][j],dp[i-1][j]);
        }
    }
    cout << (dp[m][(1<<n)-1] == INF?-1:dp[m][(1<<n)-1]) << endl;    
}