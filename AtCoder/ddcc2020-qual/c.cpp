#include<bits/stdc++.h>
using namespace std;
using p = pair<int,int>;
int main(){
    int h,w,k;
    cin >> h >> w >> k;
    char field[h][w];
    vector<p> stro;
    for(int x = 0; x < h; x ++){
        for(int y = 0;y < w; y++){
            cin >> field[x][y];
        }
    }

    bool first = true, seter = false;
    int ans[h][w] = {};
    int idx = 1;
    for(int x = 0; x < h; x ++){
        int buf = 0;
        for(int y = 0; y < w; y++){
            if(field[x][y] == '#'){
                if(first){
                    for(int dx = 0; dx <= x; dx ++){
                        for(int dy = buf; dy <= y; dy ++){
                            ans[dx][dy] = idx;
                        }
                    }
                    buf = y+1;
                }else {
                    for(int dy = buf; dy <= y; dy ++){
                        ans[x][dy] = idx;
                    }
                    buf = y+1;
                }
                idx ++;
                seter = true;
            }
        }
        if(seter){
            first = false;
        }        
    }
    for(int x = 0; x < h; x ++){
        if(ans[x][0] == 0){
            for(int y = 0; y < w; y++){
                ans[x][y] = ans[x-1][y];
            }
        }
        for(int y = 0; y < w; y++){
            if(ans[x][y] == 0){
                ans [x][y] = ans[x][y-1];
            }
            cout << ans[x][y] << " ";
        }
        cout << endl;
    }
}


