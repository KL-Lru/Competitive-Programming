#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,w;
    cin >> h >> w;
    char field[h][w];
    int l[h][w], r[h][w], u[h][w], b[h][w];
    for(int x=0;x<h;x++){
        for(int y=0;y<w;y++){
            cin >> field[x][y];
        }
    }

    int d = 0;
    for(int x=0;x<h;x++){
        d = 0;
        for(int y=0;y<w;y++){
            if(field[x][y] == '#') d = 0;
            else l[x][y] = d++;
        }
        d = 0;
        for(int y=w-1;y>=0;y--){
            if(field[x][y] == '#') d = 0;
            else r[x][y] = d++;
        }
    }
    for(int y=0;y<w;y++){
        d = 0;
        for(int x=0;x<h;x++){
            if(field[x][y] == '#') d = 0;
            else u[x][y] = d++;
        }
        d = 0;
        for(int x=h-1;x>=0;x--){
            if(field[x][y] == '#') d = 0;
            else b[x][y] = d++;
        }
    }

    int ans = 0;
    for(int x=0;x<h;x++){
        for(int y=0;y<w;y++){
            if(field[x][y] != '#')
                ans = max(ans, l[x][y] + r[x][y] + u[x][y] + b[x][y] + 1); 
        }
    }
    cout << ans << endl;

}