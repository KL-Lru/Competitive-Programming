#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    ll l=0, r=0;
    ll sm = 0;
    ll ans = 0;
    while(true){
        while(sm < k && r < n){
            sm += a[r++];
        }
        if(sm < k) break;
        ans += n-r+1;
        sm -= a[l++];
    }
    cout << ans << endl;
}