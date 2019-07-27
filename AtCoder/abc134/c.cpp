#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    int mx=0, mx2=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] > mx){
            mx2 = mx;
            mx = a[i];
        }else if(a[i] > mx2){
            mx2 = a[i];
        }
    }
    for(int i=0;i<n;i++){
        cout << (mx != a[i]?mx:mx2) << endl;
    }
}