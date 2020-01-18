#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin >> n;
    int mx = 0;
    int mp = -1;
    for(int i=2;i<=n;i++){
        cout << "? " << 1 << " " << i << endl;
        cin >> x;
        if(x > mx) {
            mx = x;
            mp = i;
        }
    }
    int ans = 0;
    for(int i=1;i<=n;i++){
        if (mp == i) continue;
        cout << "? " << mp << " " << i << endl;
        cin >> x;
        ans = max(x, ans);
    }
    cout << "! " << ans << endl;
}