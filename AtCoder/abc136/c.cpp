#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int h, mx;
    bool f = true;
    for(int i=0;i<n && f;i++){
        cin >> h;
        if(i == 0) mx = h;
        else {
            if(h < mx - 1) f = false;
            mx = max(mx, h);
        }
    }
    cout << (f?"Yes":"No") << endl;
}