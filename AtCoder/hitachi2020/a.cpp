#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    if(s.size() % 2 == 1) {
        cout << "No" << endl;
        return 0;
    }
    for(int i=0;i<s.size();i++){
        if(i%2 == 0 && s[i] == 'h')
            continue;
        if(i%2 == 1 && s[i] == 'i')
            continue;
        cout << "No" << endl;
        return 0;        
    }
    cout << "Yes" << endl;
    return 0;
}