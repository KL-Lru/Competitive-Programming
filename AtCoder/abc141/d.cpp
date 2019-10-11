#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n,m,a;
    cin >> n >> m;
    priority_queue<ll> q;
    for(int i=0;i<n;i++){
        cin >> a;
        q.push(a);
    }
    for(int i=0;i<m;i++){
        a = q.top();
        q.pop();
        q.push(a/2);
    }
    ll ans = 0;
    while(!q.empty()){
        ans += q.top();
        q.pop();
    }
    cout << ans << endl;
}