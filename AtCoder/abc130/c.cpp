#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    double w,h,x,y;
    cin >> w >> h >> x >> y;
    cout << fixed << setprecision(8) << w*h/2 << " ";
    if(w/2 == x && h/2 == y) cout << 1 << endl;
    else cout << 0 << endl;
}