#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> x(n);
    for(auto &v: x) v = -1;
    int s, c;
    for(int i=0;i<m;i++){
        cin >> s >> c;
        if(x[s-1] > 0 && x[s-1] != c){
            cout << -1 << endl;
            return 0;
        }else{
            x[s-1] = c;
        }
    }

    for(int i = 0; i < n; i ++){
        if(i == 0 && x[i] == 0){
            if(n == 1){
                cout << 0 << endl;
            }else{
                cout << -1 << endl;
            }
            return 0;
        }
        if(x[i] == -1) cout << (i == 0 ? (n == 1?0:1) : 0);
        else cout << x[i];
    }
    cout << endl;

    return 0;
}