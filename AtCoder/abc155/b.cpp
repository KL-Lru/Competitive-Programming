#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n ;
    bool f = true;
    int x;
    for(int i=0;i<n;i++){
        cin >> x ;
        if(x % 2 == 0 &&(x % 3 != 0 && x %5 != 0)){
            f = false;
        }
    }
    cout << (f?"APPROVED":"DENIED") << endl;
}