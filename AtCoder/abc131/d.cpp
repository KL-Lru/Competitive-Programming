#include <bits/stdc++.h>
using namespace std;
using P = pair<int,int>;

int main(){
    int n;
    cin >> n;
    vector<P> v(n);
    for(int i=0;i<n;i++) cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end(), [](const P x, const P y){
        if (x.second == y.second) return x.first < y.first;
        else return x.second < y.second;
    });
    int xtime = 0;
    bool ok = true;
    for(int i=0;i<n && ok;i++){
        xtime += v[i].first;
        if(xtime > v[i].second)
            ok = false;
    }
    cout << (ok?"Yes":"No") << endl;
    return 0;
}