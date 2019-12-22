#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> w(100001, vector<int>());
    int a,b;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        w[a].push_back(b);
    }
    priority_queue<int> q;
    ll ans = 0;
    for(int i=m-1;i>=0;i--){
        for(auto e: w[m-i]){
            q.push(e);
        }
        if(!q.empty()){
            ans += q.top();
            q.pop();
        }
    }
    cout << ans << endl;
}