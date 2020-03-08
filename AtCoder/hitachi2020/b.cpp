#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, m;
    cin >> a >> b >> m;
    vector<int> av(a), bv(b);
    int ans = 1e+8;
    int am = 1e+8, bm = 1e+8;
    for(auto &z: av) {
        cin >> z;
        am = min(am, z);
    }
    for(auto &z: bv){
        cin >> z;
        bm = min(bm, z);
    } 
    ans = am + bm;
    int x,y,c;
    for(int i=0;i<m;i++){
        cin >> x >> y >> c;
        ans = min(ans, av[--x] + bv[--y] - c);
    }
    cout << ans << endl;
}