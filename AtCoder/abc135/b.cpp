#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int p, cnt = 0;
    for(int i=1;i<=n;i++){
        cin >> p;
        if(p != i) cnt++;
    }
    if(cnt <= 2) cout << "YES" << endl;
    else cout << "NO" << endl;
}