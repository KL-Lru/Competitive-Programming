#include <bits/stdc++.h>
using namespace std;
using p = pair<int,int>;
int main(){
    int n, a, x, y;
    cin >> n;
    vector<vector<p>> s(n, vector<p>());
    for(int i = 0; i < n; i++){
        cin >> a;
        for(int j = 0; j < a; j++){
            cin >> x >> y;
            s[i].push_back({--x,y});            
        }
    }
    int ans = 0;
    for(int t = 0; t < pow(2,n); t++){
        vector<int> tr(n);
        int p = 0;
        int sm = 0;
        int tp = t;
        while(tp != 0){
            tr[p] = tp%2;
            sm += tp%2;
            tp /= 2;
            p++;
        }

        bool flag = true;
        for(int i = 0; i < n; i++){
            // i 人目の人の証言
            if(!tr[i]) continue;
            for(int j = 0; j < s[i].size(); j++){
                if(tr[s[i][j].first] != s[i][j].second){
                    flag = false;
                }
            }
        }
        if (flag) ans = max(ans, sm);
    }
    cout << ans << endl;
}