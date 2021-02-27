#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int c = 1; c <= t; c++){
        int x,y;
        string m;
        cin >> x >> y >> m;
        int ans = 10000;
        int dx = 0, dy = 0;
        for(int i=1; i<=m.size(); i++){
            switch(m[i-1]){
                case 'W':dx++;break;
                case 'E':dx--;break;
                case 'S':dy++;break;
                case 'N':dy--;break;
            }
            int diff = abs(dx - x) + abs(dy - y) - i;
            if(diff <= 0) {
                ans = i;
                break;
            }
        }
        cout << "Case #" << c << ": ";
        if(ans == 10000){
            cout << "IMPOSSIBLE" << endl;
        }else{
            cout << ans << endl;
        }
    }
}