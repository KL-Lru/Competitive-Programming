#include<bits/stdc++.h>
using namespace std;
bool all(string s, char c){
    for(int i=0;i<s.size();i++)
        if (s[i] != c) return false;
    return true;
}

int main(){
    string s;
    cin >> s;
    int ans = 10000;
    for(char c = 'a'; c <= 'z'; c++){
        int cnt = 0;
        string subs = s;
        while(!all(subs, c)){
            cnt++;
            string ss = "";
            for(int i=0;i<subs.size()-1;i++){
                if(subs[i] == c || subs[i+1] == c)
                    ss += c;
                else
                    ss += subs[i];
            }
            subs = ss;
        }
        if(cnt != s.size())
            ans = min(ans, cnt);
    }
    cout << ans << endl;
}