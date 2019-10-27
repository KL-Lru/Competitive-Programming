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
    sort(a.begin(), a.end());
    ll ans = n;
    ll sm  = 0;
    for(int i=0;i<n-1;i++){
        sm += a[i];
        if(a[i+1]>2*sm){
            ans = n-(i+1);
        }
    }
    cout << ans << endl;
}