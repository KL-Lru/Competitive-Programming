#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,a,b;
    cin >> k >> a >> b;
    cout << (a/k != b/k || a%k == 0 || b%k == 0?"OK":"NG") << endl;
}