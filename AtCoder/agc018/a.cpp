#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a < b) return gcd(b,a);
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main(){
    int n,k,a;
    cin >> n >> k;
    int mx = 0, gc;
    for(int i=0;i<n;i++){
        cin >> a;
        mx = max(a,mx);
        if(i==0) gc = a;
        else gc = gcd(gc, a);
    }
    if(mx < k || k % gc != 0) cout << "IMPOSSIBLE" << endl;
    else cout << "POSSIBLE" << endl;
}