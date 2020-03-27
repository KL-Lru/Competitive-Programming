#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll par(ll x){
    return x*(x-1)/2;
}

ll diff(ll x){
    return par(x) - par(x-1);
}
int main(){
    int n;
    cin >> n;
    unordered_map<int,int> m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        m[a[i]]++;
    }

    ll total = 0;
    for(auto x:m){
        total += par(x.second);
    }
    for(int i=0;i<n;i++){
        cout << (total - diff(m[a[i]])) << endl;
    }

}