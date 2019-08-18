#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main(){
    int n;
    string s;
    cin >> n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin >> s;
        sort(s.begin(), s.end());
        v[i] = s;
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    ll tp = 0;
    for(int i=0;i<n;i++){
        if(v[tp] != v[i]){
            ll sub = i-tp;
            ans += ((sub - 1) * sub) / 2;
            tp = i;
        }
    }
    ll sub = n-tp;
    ans += ((sub - 1) * sub) / 2;
    cout << ans << endl;
}
