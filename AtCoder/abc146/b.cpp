#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        s[i] = (s[i] + n > 'Z'?s[i] + n - 'Z' + 'A' - 1:s[i] + n);
    }
    cout << s << endl;
}