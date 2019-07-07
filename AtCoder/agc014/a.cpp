#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,cnt = 0;
    cin >> a >> b >> c;
    while(a != b || b != a || c != a){
        if(a%2 || b%2 || c%2){
            cout << cnt << endl;
            return 0;
        }
        cnt++;
        int ta,tb,tc;
        ta = b/2 + c/2;
        tb = a/2 + c/2;
        tc = a/2 + b/2;
        a = ta; b = tb; c = tc;
    }
    cout << (a%2 || b%2 || c%2?0:-1) << endl;
    return 0;
}