#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,m;
    cin >> n >> m;
    priority_queue<ll> a;
    ll tp;
    for(int i=0;i<n;i++) {
        cin >> tp;
        a.push(tp);
    }
    vector<pair<ll, ll> > v(m);
    for(int i=0;i<m;i++) cin >> v[i].second >> v[i].first;
    sort(v.begin(), v.end(), greater<pair<ll,ll> >());
    ll cnt = 0;
    ll pt = 0;
    ll ans = 0;
    while(cnt != n){
        if(v[pt].first < a.top()){
            cnt++;
            ans += a.top();
            a.pop();
        }else{
            ans += min(v[pt].second, n-cnt) * v[pt].first;
            cnt +=  min(v[pt].second, n-cnt);
            pt++;
        }
    }
    cout << ans << endl;
}