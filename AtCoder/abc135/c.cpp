#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    vector<int> a(n+1), b(n);
    for(int i=0;i<=n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    ll ans = 0;
    for(int i=n-1;i>=0;i--){
        // i+1番目の方を先に倒す
        ans += min(b[i], a[i+1]);
        b[i] = max(0,b[i] - a[i+1]);

        // i番目の方も倒せるなら倒す.
        ans += min(b[i], a[i]);
        a[i] = max(0, a[i] - b[i]);
    }
    cout << ans << endl;
}
