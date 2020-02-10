#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int mn = n+1;
    int t, ans = 0;
    for(int i=0;i<n;i++){
        cin >> t;
        if(t < mn){
            ans ++;
            mn = t;
        } 
    }
    cout << ans << endl;
}