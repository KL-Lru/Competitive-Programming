#include <bits/stdc++.h>
using namespace std;
using T = tuple<int, int, int>;
const int INF = 1e+8;
const int dx[4] = {0,1,0,-1};
const int dy[4] = {1,0,-1,0};

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<char>> field(h, vector<char>(w));
    for(int x = 0; x < h; x++){
        for(int y = 0; y < w; y++){
            cin >> field[x][y];
        }
    }
    int ans = 0;
    for(int sx = 0; sx < h; sx++){
        for(int sy = 0; sy < w; sy++){
            if(field[sx][sy] == '#') continue;
            vector<vector<bool>> dst(h, vector<bool>(w, false));
            int mxdst = 0;
            queue<T> q;
            q.push(T{sx, sy, 0});
            while(!q.empty()){
                int x,y,d;
                tie(x,y,d) = q.front();
                q.pop();
                if(dst[x][y]) continue;
                dst[x][y] = true;
                mxdst = max(mxdst, d);
                for(int i = 0; i < 4; i++){
                    if(x + dx[i] < 0 || 
                       y + dy[i] < 0 ||
                       x + dx[i] >= h ||
                       y + dy[i] >= w ||
                       dst[x + dx[i]][y + dy[i]] ||
                       field[x + dx[i]][y + dy[i]] == '#') continue;
                    q.push(T{x + dx[i], y + dy[i], d+1});
                }
            }
            ans = max(mxdst, ans);
        }
    }
    cout << ans << endl;
}