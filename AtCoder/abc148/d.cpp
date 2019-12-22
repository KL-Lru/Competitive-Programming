#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int v = 1;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(v != a[i]) ans++;
        else v++;
    }
    cout << (v==1?-1:ans) << endl;
}