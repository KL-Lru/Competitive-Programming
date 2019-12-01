#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1000000007;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    ll dp[100001][3] = {};
    if(a[0] != 0){
        cout << 0 << endl;
        return 0;
    }
    ll ans = 1;
    for(int i=1;i<=n;i++){
        int cnt = 0;
        for(int j=0;j<3;j++){
            if(dp[i-1][j] == a[i-1]){
                cnt++;
            }
        }
        ans = (ans*cnt)%MOD;
        for(int j=0;j<3;j++){
            dp[i][j] = dp[i-1][j];
        }
        for(int j=0;j<3;j++){
            if(dp[i-1][j] == a[i-1]){
                dp[i][j] = dp[i-1][j]+1;
                break;
            }
        }
    }
    cout << ans << endl;    
}