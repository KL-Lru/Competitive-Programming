#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 2019;
int main(){
    ll l,r;
    cin >> l >> r;
    ll mn = 3000;
    for(int i = l;i < min(l + MOD, r); i++){
        for(int j = i+1;j <= min(i+MOD+1, r); j++){
            mn = min(mn, ((i%MOD) * (j%MOD)) %MOD);
        }
    }
    cout << mn << endl;
}