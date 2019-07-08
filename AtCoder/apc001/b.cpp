#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    ll ac = 0, bc = 0;
    for(int i=0;i<n;i++){
        if(a[i] < b[i]) ac += (b[i]-a[i])/2;
        if(a[i] > b[i]) bc += a[i]-b[i];
    }
    cout << (ac >= bc?"Yes":"No") << endl;
}