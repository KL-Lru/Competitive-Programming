#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>> field(n, vector<int>(n));
    vector<vector<int>> nsum(n, vector<int>(n, 0));
    for(int x=0;x<n;x++){
        for(int y=0;y<n;y++){
            cin >> field[x][y];
            nsum[x][y] += field[x][y];
            if(x!=0){
                nsum[x][y] += nsum[x-1][y];
            }
            if(y!=0){
                nsum[x][y] += nsum[x][y-1];
            }
            if(x != 0 && y != 0){
                nsum[x][y] -= nsum[x-1][y-1];
            }
        }
    }
    vector<int> score(n*n+1, 0);
    for(int x=0;x<n;x++){
        for(int y=0;y<n;y++){
            for(int dx=x;dx<n;dx++){
                for(int dy=y;dy<n;dy++){
                    int sc = nsum[dx][dy];
                    if(y != 0)
                        sc -= nsum[dx][y-1];
                    if(x != 0)
                        sc -= nsum[x-1][dy];
                    if(x != 0 && y != 0)
                        sc += nsum[x-1][y-1];
                    int block = (dx - x + 1) * (dy - y + 1);
                    score[block] = max(score[block], sc);
                }
            }
        }
    }
    for(int i=1;i<=n*n;i++) score[i] = max(score[i], score[i-1]);

    int q;
    cin >> q;
    int b;
    for(int i=0;i<q;i++){
        cin >> b;
        cout << score[b] << endl;
    }    
}