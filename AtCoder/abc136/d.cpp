#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<int> ans(s.size(), 0);
    int rcnt = 0, lcnt = 0, pos = -1;
    for(int i=0;i<s.size();){
        while(s[i] == 'R'){
            rcnt++;
            i++;
        }
        pos = i;
        while(s[i] == 'L' && i < s.size()){
            lcnt++;
            i++;
        }        
        ans[pos-1] = (rcnt+1)/2 + lcnt/2;
        ans[pos] = rcnt/2 + (lcnt+1)/2;
        rcnt = 0;
        lcnt = 0;
    }

    for(auto x : ans){
        cout << x << " ";
    }
    cout << endl;
}

// LRの並びで区切れる
// RLの並びに集合する