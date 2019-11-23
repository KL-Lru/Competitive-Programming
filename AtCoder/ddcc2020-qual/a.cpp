#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int x,y;
    cin >> x >> y;
    ll sm = 0;
    switch(x){
        case 1:
            sm += 300000;
            break;
        case 2:
            sm += 200000;
            break;
        case 3:
            sm += 100000;
            break;
    }
    switch(y){
        case 1:
            sm += 300000;
            break;
        case 2:
            sm += 200000;
            break;
        case 3:
            sm += 100000;
            break;
    }
    if (x == 1 && y == 1){
        sm += 400000;
    }
    cout << sm << endl;
}
