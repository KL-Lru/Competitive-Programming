#include <bits/stdc++.h>
using namespace std;
template<typename Integer>
bool isPrime(Integer x){
    for(Integer i = 2; i <= sqrt(x); i++){
        if(x%i == 0) return false;
    }
    return true;
}

int main(){
    int x;
    cin >> x;
    for(int i=0;;i++){
        if(isPrime(x+i)){
            cout << x+i << endl;
            return 0;
        }
    }
}