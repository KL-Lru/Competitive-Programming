#include <bits/stdc++.h>
using namespace std;
int h, w;

void dfs(int x, int y, int d, char buf, vector<vector<char>> &f, vector<vector<int>> &dep){
    if(x >= h || y >= w) return;
    if(f[x][y] == '#' && buf == '.') d++;
    if(dep[x][y] > d){
        dep[x][y] = d;
        dfs(x+1, y, d, f[x][y], f, dep);
        dfs(x, y+1, d, f[x][y], f, dep);
    }
}

int main(){
    cin >> h >> w;
    vector<vector<char>> field(100, vector<char>(100));
    vector<vector<int>> dep(100, vector<int>(100, 1e+7));
    for(int x=0; x< h; x++){
        for(int y = 0; y < w; y++){
            cin >> field[x][y];
        }
    }
    dfs(0, 0, 0, '.', field, dep);
    cout << dep[h-1][w-1] << endl;
}