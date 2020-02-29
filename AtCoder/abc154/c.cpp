#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& x: a) cin >> x;
    sort(a.begin(), a.end());
    for(int i=1;i<n;i++){
        if(a[i] == a[i-1]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}