#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n ;
    vector<int> x(n), y(n);
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }
    double ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans += sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
        }
    }
    ans /= n;
    cout << setprecision(10) << ans << endl;
}