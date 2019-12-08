#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    int a[h][w], b[h][w];
    int diff[h][w];
    for(int x = 0; x < h; x ++){
        for(int y = 0; y < w; y ++){
            cin >> a[x][y];
        }
    }
    for(int x = 0; x < h; x ++){
        for(int y = 0; y < w; y ++){
            cin >> b[x][y];
        }
    }
    for(int x = 0; x < h; x ++){
        for(int y = 0; y < w; y ++){
            diff[x][y] = abs(a[x][y]-b[x][y]);
        }
    }
    int x = 0, y = 0;
    int base = 80*80;
    int lim = base*2;
    vector<vector<vector<int>>> dp(h, vector<vector<int>>(w, vector<int>(lim+1, 0)));
    dp[0][0][diff[0][0]] = 1;
    for(int x = 0; x < h; x ++){
        for(int y = 0; y < w; y ++){
            for(int d = 0; d <= lim; d ++){
                if(x != 0){
                    dp[x][y][d] = max(dp[x][y][d], dp[x-1][y][abs(d-diff[x][y])]);
                    if(d + diff[x][y] <= lim){
                        dp[x][y][d] = max(dp[x][y][d], dp[x-1][y][d+diff[x][y]]);
                    }
                }
                if(y != 0){
                    dp[x][y][d] = max(dp[x][y][d], dp[x][y-1][abs(d-diff[x][y])]);
                    if(d + diff[x][y] <= lim){
                        dp[x][y][d] = max(dp[x][y][d], dp[x][y-1][d+diff[x][y]]);
                    }
                }
            }
        }
    }
    for(int d = 0; d <= base; d++){
        if(dp[h-1][w-1][d] == 1){
            cout << d << endl;
            return 0;
        }
    }
}