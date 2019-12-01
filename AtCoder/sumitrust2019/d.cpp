#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n >> s;
    int dp[4][1000] = {};
    dp[0][0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++){
                dp[3][(j*100) + (k*10) + (s[i]-'0')] = dp[2][(j*10) + k];
            }
        }
        for(int j = 0; j < 10; j++){
            dp[2][(j*10) + (s[i]-'0')] = dp[1][j];
        }
        dp[1][(s[i]-'0')] = dp[0][0];
    }
    int ans = 0;
    for(int i=0;i<1000;i++){
        if(dp[3][i] == 1) {
            ans ++;
        }
    }

    cout << ans << endl;
}