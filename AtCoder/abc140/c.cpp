#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> b(n-1);
    for(int i=0;i<n-1;i++) cin >> b[i];
    // 1番目はb[0], n番目はb[n-1]が最大で確定
    int ans = b[0] + b[n-2];
    // 他はb[i]かb[i-1]のうち小さい方で確定
    for(int i=1;i<n-1;i++){
        ans += min(b[i], b[i-1]);
    }
    cout << ans << endl;
}