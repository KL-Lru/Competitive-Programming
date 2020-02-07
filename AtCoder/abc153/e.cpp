#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;
const int INF = 1e+8;
const int LIM = 10001;
int main(){
    int h, n;
    cin >> h >> n;
    vector<P> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
    }
    int dp[LIM];
    for(int i=0;i<LIM;i++){
        dp[i] = INF;
    }
    dp[0] = 0;
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<LIM;j++){
            if(j < v[i].first) dp[j] = min(dp[j], v[i].second);
            else dp[j] = min(dp[j], dp[j-v[i].first] + v[i].second);
        }
    }
    cout << dp[h] << endl;
}