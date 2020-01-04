#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll a,b,k;
    cin >> a >> b >> k;
    cout << max(a-k, 0LL) << " " << max(b - max(k - a, 0LL), 0LL) << endl;
}