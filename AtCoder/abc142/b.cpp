#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k, h;
    int ans = 0;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> h;
        ans += (h >= k);
    }
    cout << ans << endl;
}