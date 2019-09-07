#include<bits/stdc++.h>
using namespace std;
int main(){
    string t;
    cin >> t;
    int ans = 0;
    int dp[t.size()+1] = {};
    for(int i=1;i<t.size();i++){
        if((t[i] == '5' || t[i] == '?') && (t[i-1] == '2' || t[i-1] == '?')){
            dp[i] = 2 + (i==1?0:dp[i-2]);
        }
    }
    for(int i=1;i<t.size();i++){
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
}