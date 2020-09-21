#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n ;
    vector<int> x(n);
    for(int i = 0; i < n ; i ++){
        cin >> x[i];
    }
    int ans = 1e+9;
    int sm = 0;
    for(int i=0;i<=100;i++){
        sm = 0;
        for (auto v:x){
            sm += pow(v - i, 2);
        }
        ans = min(ans, sm);
    }
    cout << ans << endl;
}