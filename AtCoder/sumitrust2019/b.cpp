#include <bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin >> n;
    int x = ceil(n / 1.08);
    if(floor((double)x * 1.08) != n) cout << ":(" << endl;
    else cout << x << endl;
}