#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        ans += a[i]/2;
        if(a[i]%2 && i != n-1 && a[i+1] > 0){
            a[i+1]--;
            ans++;
        }
    }
    cout << ans << endl;
}