#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    while(x >= 100){
        x -= (100 + (x%100 > 5?5:x%100));
    }
    if(x == 0) cout << 1 << endl;
    else cout << 0 << endl;
}