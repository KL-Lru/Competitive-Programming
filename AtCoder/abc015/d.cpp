#include <bits/stdc++.h>
using namespace std;
int main(){
    int w,n,k;
    cin >> w >> n >> k;
    vector<pair<int,int>> sc;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        sc.push_back({a,b});
    }
    vector<vector<int>> dp(w+1, 
           vector<int>(k+1, 0));
    for(int i=0;i<n;i++){
        for(int j=k-1;j>=0;j--){
            for(int d=w-sc[i].first;d >= 0; d--){
                dp[d + sc[i].first][j+1] = max(dp[d+sc[i].first][j+1], dp[d][j] + sc[i].second);
            }
        }
    }
    int ans = 0;
    for(int i =0;i<=k;i++){
        ans = max(dp[w][i], ans);
    }
    cout << ans << endl;
}
