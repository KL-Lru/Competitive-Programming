#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t,u;
    int a,b;
    cin >> s >> t;
    cin >> a >> b;
    cin >> u;
    cout << (s == u?a-1:a) << " " << (t == u?b-1:b) << endl;
}