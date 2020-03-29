#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int x,y,a,b,c;
    int t;
    cin >> x >> y >> a >> b >> c;
    priority_queue<pair<int, int>> q;
    for(int i=0;i<a;i++){
        cin >> t;
        q.push({t,0});
    }
    for(int i=0;i<b;i++){
        cin >> t;
        q.push({t,1});
    }
    for(int i=0;i<c;i++){
        cin >> t;
        q.push({t,2});
    }

    ll cnt[] = {0,0,0};
    ll ans = 0;
    while(x+y > cnt[0] + cnt[1] + cnt[2]){
        int v, k;
        tie(v,k) = q.top();
        q.pop();
        if(k == 0 && cnt[0] >= x) continue;
        if(k == 1 && cnt[1] >= y) continue;
        ans += v;
        cnt[k]++;
    }
    cout << ans << endl;
}