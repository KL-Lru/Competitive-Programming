#include <bits/stdc++.h>
using namespace std;
using  ll = long long;
ll leftLow(vector<int> &a, int x, int pos){
    ll cnt = 0;
    for(int i=0;i<pos;i++){
        cnt += (a[i] < x ? 1 : 0);
    }
    return cnt;
}

ll rightLow(vector<int> &a, int x, int pos){
    ll cnt = 0;
    for(int i=pos+1;i<a.size();i++){
        cnt += (a[i] < x ? 1 : 0);
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        ans += leftLow(a, a[i], i) * rightLow(a, a[i], i);
    }
    cout << ans << endl;
}