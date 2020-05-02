#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int LIM = 2019;
int main(){
    string s;
    cin >> s;
    int x = 0;
    vector<int> cnt(LIM);
    cnt[0] ++;
    ll ans = 0;
    ll p = 1;
    for(int i = s.size()-1; i >= 0; i --){
        x += (s[i] - '0') * p;
        x %= LIM;
        ans += cnt[x];
        cnt[x] ++;
        p *= 10;
        p %= LIM;
    }
    cout << ans << endl;

}