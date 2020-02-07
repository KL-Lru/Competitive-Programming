#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n,k;
    cin >> n >> k;
    int h;
    priority_queue<int> q;
    for(int i=0;i<n;i++){
        cin >> h;
        q.push(h);
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        h = q.top();
        q.pop();
        if(i >= k) ans += h;
    }
    cout << ans << endl;
}