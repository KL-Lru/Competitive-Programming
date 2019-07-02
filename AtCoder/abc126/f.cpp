#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int m,k;
    cin >> m >> k;
    int lim = pow(2, m);
    if(k >= lim) cout << -1 << endl;
    else if(k == 0){
        for(int i=0;i<lim; i++){
           cout << i << " " << i << " ";
        }
        cout << endl;
    }else if(m == 1){
        cout << -1 << endl;
    }else{
        cout << 0 << " " << k;
        for(int i=0;i<lim;i++){
            if(i == k) continue;
            cout << " " << i;
        }
        cout << " " << k;
        for(int i=lim-1;i>0;i--){
            if(i == k) continue;
            cout << " " << i;
        }
        cout << endl;
    }
}