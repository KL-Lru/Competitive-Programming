#include<bits/stdc++.h>
using namespace std;
const int dx[] = {1,0,-1,0}, dy[] = {0,1,0,-1}; 

int main(){
    int h,w;
    cin >> h >> w;
    char field[51][51];
    bool used[51][51] = {};
    queue<tuple<int,int,int>> q;
    int cnt_dot = 0;

    for(int x = 0;x < h; x++){
        for(int y = 0;y < w; y++){
            cin >> field[x][y];
            if(field[x][y] == '.') cnt_dot++;
        }
    }
    
    q.push(make_tuple(0,0,1));
    int goal = 0;
    while(!q.empty()){
        int x,y,d;
        tie(x,y,d) = q.front(); q.pop();
        if(x == h-1 && y == w-1){
            goal = d;
            break;
        }

        if(used[x][y]) continue;
        used[x][y] = true;

        for(int i = 0; i < 4; i++){
            if(x + dx[i] < 0 || y + dy[i] < 0 || x + dx[i] >= h || y + dy[i] >= w || used[x + dx[i]][y + dy[i]] || field[x][y] == '#') continue;
            q.push(make_tuple(x + dx[i],y + dy[i], d+1));
        }
    }
    cout << (goal? cnt_dot - goal : -1) << endl;
}