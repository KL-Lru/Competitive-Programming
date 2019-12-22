#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    if(n%2==1) cout << 0 << endl;
    else{
        ll ans=0;
        ll md = 10;
        while(n/md != 0){
            ans += n/md;
            md*=5;
        }
        cout << ans << endl;
    }
}