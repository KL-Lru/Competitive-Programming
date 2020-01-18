#include <bits/stdc++.h>
using namespace std;
const int IINF = -1e+8;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> p(m);
    vector<string> s(m);
    for(int i=0;i<m;i++){
        cin >> p[i] >> s[i];
    }
    vector<int> vl(n, 0);
    int ac = 0, wa = 0;
    for(int i=0;i<m;i++){
        if(s[i] == "AC"){
            if(vl[p[i]] >= 0)
                ac ++;
            wa += max(0, vl[p[i]]);
            vl[p[i]] = IINF;
        }else{
            vl[p[i]] ++;
        }
    }
    cout << ac << " " << wa << endl;
}