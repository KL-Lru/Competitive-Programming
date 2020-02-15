#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n,a,b;
    cin >> n >> a >> b;
    if((b-a)%2 == 0){
        cout << (b-a)/2 << endl;
    }else{
        cout << (b-a)/2 + 1 + min(a-1, n-b);
    }
}