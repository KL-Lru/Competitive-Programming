#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAX = LONG_MAX;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    ll sm = 0;    
    for(int i=0;i<n;i++){
        cin >> a[i];
        sm += a[i];
    }
    ll ans = MAX;
    ll tsm = 0;
    for(int i=0;i<n;i++){
        tsm += a[i];
        sm -=a[i];
        ans = min(ans,  abs(sm - tsm));
    }
    cout << ans << endl;
}
