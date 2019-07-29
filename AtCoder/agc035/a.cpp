#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    cin >> n;
    map<int, int> m;
    for(int i=0;i<n;i++){
        cin >> a;
        m[a] ++;
    }
    string ans = "Yes";
    if(m.size() > 3) ans = "No";
    else if (m.size() == 3){
        int x = 0;
        for (auto p : m){
            x ^= p.first;
            if(p.second != n/3)
                ans = "No";        
        }
        if(x != 0)
            ans = "No";
    }else if (m.size() == 2){
        for (auto p : m){
            if (p.first == 0){
                if (p.second != n/3)
                    ans = "No";
            }else{
                if (p.second != 2*n/3)
                    ans = "No";
            }
        }
    }else{
        if (m[0] != n)
            ans = "No";        
    }
    cout << ans << endl;
}