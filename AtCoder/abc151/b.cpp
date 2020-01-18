#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,m;
    cin >> n >> k >> m;
    int a, sm = 0;
    for(int i=0;i<n-1;i++){
        cin >> a;
        sm += a;
    }
    cout << (n * m - sm > k?-1:max(0, n * m - sm)) << endl;
}