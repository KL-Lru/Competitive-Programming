#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n;i ++){
        cin >> x >> y;
        v[i] = make_pair(x,y);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for(int i=0; i< n; i++){
        for(int j = i+1; j< n; j++){
            int cnt = 0;
            // 頂点 i -> j への変異をp, qと過程する
            int p = v[j].first - v[i].first;
            int q = v[j].second - v[i].second;
            // cout << endl << p << " " << q << endl;
            for(int x = 0; x < n; x++){
                if(find(v.begin(), v.end(), make_pair(v[x].first-p, v[x].second-q)) != v.end()){
                    cnt++;
                    // cout << "find " << v[x].first << ", " << v[x].second << endl;
                }
            }
            ans = max(ans, cnt);
        }
    }
    cout << n - ans << endl;
}