#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt = 1;
    string buf = string() + s[0];
    for(int i=1;i<s.size();i++){
        cnt++;
        string nw = string() + s[i];
        if(nw == buf){
            if(i == s.size()-1)
                cnt--;
            i++;
            nw += s[i];
        }
        buf = nw;
    }
    cout << cnt << endl;
}
