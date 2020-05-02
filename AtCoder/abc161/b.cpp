#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    int sm = 0;
    for(auto &x: a) {
        cin >> x;
        sm += x;
    }
    double base = sm/(4.0*m);
    int cnt = 0;
    for(auto x: a) {
        if(x >= base)cnt++;
    }    
    cout << (cnt >= m?"Yes":"No") << endl;
}