#include<bits/stdc++.h>
using namespace std;
using P = pair<int,int>;

int main(){
    int n;
    cin >> n;
    vector<P> r(n), b(n);
    for(int i=0;i<n;i++) cin >> r[i].first >> r[i].second;
    for(int i=0;i<n;i++) cin >> b[i].first >> b[i].second;
    sort(r.begin(), r.end(), [](const P x, const P y){
        return x.second < y.second;
    });
    sort(b.begin(), b.end(), [](const P x, const P y){
        return x.first < y.first;
    });
    int ans = 0;
    vector<bool> used(n,false);
    for(auto eb: b){
        int elem = -1, mxy = -1;
        for(int i = 0; i < n; i++){
            if(r[i].second >= eb.second) break;
            if(used[i]) continue;
            if(r[i].first < eb.first){
                mxy = r[i].second;
                elem = i;
            }
        }
        if(elem != -1) {
            used[elem] = true;
            ans ++;
        }
    }
    cout << ans << endl;
}