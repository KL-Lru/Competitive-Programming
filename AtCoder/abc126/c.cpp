#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    double ans = 0;
    for(int i=1;i<=n;i++){
        double count = max(0.0,ceil(log2(k/(double)i)));
        ans += 1/pow(2, count);
    }
    cout << setprecision(15) << (ans/n) << endl;
}