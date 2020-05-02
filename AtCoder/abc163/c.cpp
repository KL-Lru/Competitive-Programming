#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    int a;
    for(int i=0;i<n-1;i++){
        cin >> a ;
        x[a-1]++;
    }
    for(int i=0;i<n;i++){
        cout << x[i] << endl;
    }
}