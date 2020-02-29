#include <bits/stdc++.h>
using namespace std;
double e(int x){
    return (x+1)/2.0;
}
int main(){
    int n,k ;
    cin >> n >> k;
    vector<int> p(n);
    for(auto &x: p) cin >> x;
    double ans = 0, cur = 0;
    for(int i=0;i<k;i++){
        cur += e(p[i]);
    }
    ans = cur;
    for(int i=0;i + k< n; i ++){
        cur = cur - e(p[i]) + e(p[i+k]);
        ans = max(ans, cur);
    }
    cout << setprecision(12) << ans << endl;
}
