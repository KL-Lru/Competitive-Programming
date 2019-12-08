#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = (1e+9) +7;

void affect(ll num, vector<ll> &cnt){
    int p = 0;
    while(num != 0){
        cnt[p++] += num%2;
        num /= 2;
    }
}
int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> cnt(60);
    for(int i=0;i<n;i++){
        cin >> a[i];
        affect(a[i], cnt);
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        vector<ll> tv(60);
        for(int p = 0;p < 60; p++){
            int b = a[i]%2;
            a[i]/=2;
            cnt[p] -= b;
            ans = (ans + ((ll)pow(2,p)%MOD) * (b?(n-i-1)-cnt[p]:cnt[p]))%MOD;
        }
    }
    cout << (ans%MOD) << endl;
}
