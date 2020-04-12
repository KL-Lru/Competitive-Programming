#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    string s;
    cin >> n >> s;
    vector<int> r(n+1),g(n+1),b(n+1);
    for(int i=1;i<=n;i++){
        r[i] += r[i-1];
        g[i] += g[i-1];
        b[i] += b[i-1];
        switch(s[i-1]){
            case 'R':r[i]++;break;
            case 'G':g[i]++;break;
            case 'B':b[i]++;break;
        }
    }
    ll ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(s[i] == s[j]) continue;
            if((s[i] == 'R' && s[j] == 'G') || (s[i] == 'G' && s[j] == 'R')) ans += b[n] - b[j];
            if((s[i] == 'R' && s[j] == 'B') || (s[i] == 'B' && s[j] == 'R')) ans += g[n] - g[j];
            if((s[i] == 'B' && s[j] == 'G') || (s[i] == 'G' && s[j] == 'B')) ans += r[n] - r[j];
            if(j+(j-i) < n && (s[i] != s[j+(j-i)] && s[j] != s[j+(j-i)])) ans --;
        }
    }
    cout << ans << endl;
}