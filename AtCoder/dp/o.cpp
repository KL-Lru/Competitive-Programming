#include<bits/stdc++.h>
using namespace std;
using ui = uint32_t;
const int MOD = 1e+9+7;

int a[21][21] = {};
int dp[21][1 << 21] = {};

ui popcnt(ui n){
    ui c = 0;
    c = (n & 0x55555555) + ((n>>1) & 0x55555555);
    c = (c & 0x33333333) + ((c>>2) & 0x33333333);
    c = (c & 0x0f0f0f0f) + ((c>>4) & 0x0f0f0f0f);
    c = (c & 0x00ff00ff) + ((c>>8) & 0x00ff00ff);
    c = (c & 0x0000ffff) + ((c>>16) & 0x0000ffff);
    return(c);
}

int main(){
    int n;
    cin >> n;
    int lim = 1 << n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            if(i == 0) dp[0][1 << j] = a[i][j]; // 最初の一人目だけはaの値と同値
        }
    }
    for(int i = 1; i < n; i++){
        for(ui b = 1; b < lim; b++){
            if(i != popcnt(b)) continue; // i人決まってる状態の場合のみ処理でよい
            for(int j = 0; j < n; j++){
                if(b & (1 << j) || !a[i][j]) continue; // 既にペアになってる奴や相性の良くないのは無視
                dp[i][b | 1 << j] += dp[i-1][b];
                dp[i][b | 1 << j] %= MOD;
            }
        }
    }
    cout << dp[n-1][lim-1] << endl;
}