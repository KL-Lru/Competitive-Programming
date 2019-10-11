#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll a, ll b){
    // require:   a > b
    if(a < b) return gcd(b,a);
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main(){
    ll a, b;
    cin >> a >> b;
    ll gc = gcd(a,b);
    if(gc == 1){
        cout << 1 << endl;
        return 0;
    }
    vector<ll> cd;
    for(int i=1;i<=sqrt(gc);i++){
        if(gc % i == 0){
            cd.push_back(i);
            cd.push_back(gc/i);
        }
    }
    sort(cd.begin(), cd.end());
    int ans = 0;
    for(int i=0;i<cd.size();i++){
        bool f = true;
        for(int j = 1; j < i; j++){
            if(cd[i] % cd[j] == 0)
                f = false;
        }
        ans += (f?1:0);
    }
    cout << ans << endl;
}