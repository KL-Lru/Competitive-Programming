#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int gcd(int x, int y){
    if(x < y) return gcd(y, x);
    if(y == 0) return x;
    return (gcd(y, x%y));
}   

int main(){
    int k;
    cin >> k;
    ll sm = 0;
    for(int a=1;a<=k;a++){
        for(int b=1;b<=k;b++){
            for(int c=1;c<=k;c++){
                sm += gcd(gcd(a,b), c);
            }
        }
    }
    cout << sm << endl;
}