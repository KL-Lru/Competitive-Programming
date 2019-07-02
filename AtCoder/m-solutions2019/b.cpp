#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    for (auto c : s){
        if (c == 'o'){
            cnt++;
        }
    }
    cout << (cnt + (15 - s.size()) >= 8 ? "YES" : "NO") << endl;
}