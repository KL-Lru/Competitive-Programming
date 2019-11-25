#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> ans;
    int t = n;
    while(t != 0){
        int i = m;
        for(i=min(t,m);i>=0;i--){
            if(s[t-i] == '0'){
                ans.push_back(i);
                t -= i;
                break;
            }
        }
        if(i == 0) {
            cout << -1 << endl;
            return 0;
        }
    }
    for(int i=ans.size()-1;i>=0;i--){
        cout <<  ans[i] << " ";
    }
    cout << endl;
}