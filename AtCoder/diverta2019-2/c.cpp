#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void out(ll x, ll y){ cout << x << " " << y << endl;}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    ll sm = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sm += abs(a[i]);
    }
    sort(a.begin(),a.end());
    if(a[0] < 0 && a[n-1] > 0){
        // マイナスの物はn-1に, プラスの物は0と演算することで絶対値の総和が解
        cout << sm << endl;
    }else{
        // 全符号が同じなら最小値分差っ引く
        if(a[0] < 0) cout << sm - 2*abs(a[n-1]) << endl;
        else cout << sm - 2*abs(a[0]) << endl;
    }
    for(int i=1;i<n-1;i++){
        if(a[i] < 0){
            out(a[n-1], a[i]);
            a[n-1] -= a[i];
        }else{
            out(a[0], a[i]);
            a[0]  -= a[i];
        }
    }
    out(a[n-1], a[0]);
}