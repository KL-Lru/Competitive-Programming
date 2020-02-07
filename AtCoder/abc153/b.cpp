#include <bits/stdc++.h>
using namespace std;
int main(){
    int h,n;
    cin >> h >> n;
    int sm = 0, a;
    for(int i=0;i<n;i++){
        cin >> a;
        sm += a;
    }
    cout << (h<=sm?"Yes":"No") << endl;
}