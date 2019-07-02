#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = (1e+9)+7;

int main(){
    int n,m,a;
    cin >> n >> m;
    vector<bool> br(n+1, false);
    vector<ll> dp(n+1,0);
    for(int i=0;i<m;i++){
        cin >> a;
        br[a] = true;
    }
    dp[0] = 1;
    for(int i=0;i<n;i++){
        if(i+1 <= n && !br[i+1]) dp[i+1] = (dp[i+1] + dp[i]) %MOD ;
        if(i+2 <= n && !br[i+2]) dp[i+2] = (dp[i+2] + dp[i]) %MOD ;
    }
    cout << dp[n] << endl;
}