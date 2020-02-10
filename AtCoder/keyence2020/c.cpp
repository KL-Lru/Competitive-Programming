#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,s;
    cin >> n >> k >> s;
    int t = (s==1e+9?1:1e+9);
    for(int i=0;i<n;i++){
        cout << (i<k?s:t) << endl;
    }
}