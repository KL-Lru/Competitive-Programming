#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll s;
    cin >> s;
    ll x1 = ceil(sqrt(s)), y1 = 1;
    ll x2, y2 = ceil(sqrt(s));
    x2 = x1 * y2 - s;
    cout << 0 << " " << 0 << " ";
    cout << x1 << " " << y1 << " ";
    cout << x2 << " " << y2 << " " << endl;
    return 0;
}