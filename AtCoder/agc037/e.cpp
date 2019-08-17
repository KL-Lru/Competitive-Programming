#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(k > log2(n)){
        // log2(n)回以上出来るなら全ての文字を辞書順最小のものに出来る
        sort(s.begin(), s.end());
        char x = s[0];
        for(int i=0;i<n;i++) cout << x;
        cout << endl;
    }else{
        //多くて13回程度, シミュレートして間に合う
        string ans = s;
        for(int i=0;i<k;i++){
            string rev = s;
            reverse(rev.begin(), rev.end());
            s += rev;
            if(i!=k-1){
                string nxt = rev;
                reverse(s.begin(), s.end());
                for(int pos = 0; pos < s.size() - n; pos++){
                    nxt = min(nxt, s.substr(pos, n));
                }
                reverse(nxt.begin(), nxt.end());
                s = nxt;
            }else{
                for(int pos = 0; pos < s.size() - n; pos++){
                    ans = min(ans, s.substr(pos, n));
                }
            }
        }
        cout << ans << endl;
    }
}