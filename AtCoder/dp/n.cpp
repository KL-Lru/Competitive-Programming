#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll a[401]  = {};
ll sm[401] = {};

ll dp[401][401] = {};

ll solve(int l, int r){
    if (l == r) return 0;
    if (dp[l][r]) return dp[l][r];
    ll res = LONG_LONG_MAX;
    ll dif = sm[r] - sm[l-1];
    for(int i = l; i < r; i++){
        res = min(res, solve(l, i) + solve(i+1, r) + dif);
    }
    dp[l][r] = res;
    return dp[l][r];
}

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        sm[i] += a[i] + sm[i-1];
    }
    cout << solve(1, n) << endl;
}