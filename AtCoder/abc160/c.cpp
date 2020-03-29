#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,n;
    cin >> k >> n;
    vector<int> a(n);
    for(auto &x: a) cin >> x;
    int ans = k - (a[0] + k - a[n-1]);
    for(int i=0;i<n-1;i++){
        ans = min(ans, k - (a[i+1] - a[i]));
    }
    cout << ans << endl;
}