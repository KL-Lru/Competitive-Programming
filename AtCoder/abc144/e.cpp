#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using T = tuple<int,int,int>;
int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), f(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> f[i];
    sort(a.begin(), a.end());
    sort(f.begin(), f.end(), greater<ll>());
    ll lp = 0, rp = 0;
    for(int i=0;i<n;i++)
        rp = max(rp, a[i] * f[i]);
    ll ans = -1;
    while(lp <= rp){
        if(lp == rp) {ans = lp;break;}
        ll mid = (lp+rp)/2;
        ll cnt = 0;
        for(int i=0;i<n;i++){
            if(a[i] * f[i] > mid){
                cnt += a[i] - mid/f[i];
            }
        }
        if(cnt > k)lp = mid+1;
        else rp = mid;
    }
    cout << ans << endl;
}