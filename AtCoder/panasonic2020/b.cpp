#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll h,w;
    cin >> h >> w;
    cout << (h == 1 || w == 1 ? 1 : ll(ceil(h/2.0)*ceil(w/2.0) + ((h/2) * (w/2)))) << endl;
}