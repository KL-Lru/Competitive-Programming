#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> t(n);
    for(int i = 0; i < n; i++){
        cin >> s[i] >> t[i];
    }
    string x;
    cin >> x;
    int ans = 0;
    bool f = false;
    for(int i = 0; i < n; i++){
        if (f) ans += t[i];
        if (s[i] == x) f = true;
    }
    cout << ans << endl;
}