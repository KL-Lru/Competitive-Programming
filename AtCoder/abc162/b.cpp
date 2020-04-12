#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    ll sm = 0;
    for(int i=1;i<=n;i++){
        if(i%3==0 || i%5 == 0) continue;
        sm += i;
    }
    cout << sm << endl;
}