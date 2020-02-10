#include <bits/stdc++.h>
using namespace std;
using P = pair<int,int>;
int main(){
    int n, x,l;
    cin >> n;
    vector<P> v(n);
    for(int i=0;i<n;i++){
        cin >> x >> l;
        v[i].first = x + l;
        v[i].second = x - l;
    }
    sort(v.begin(), v.end());
    int xx = -(1e+9), ans = 0;
    for(int i=0;i<n;i++){
        if(xx <= v[i].second){
            xx = v[i].first;
            ans ++;
        }
    }
    cout << ans << endl;
}