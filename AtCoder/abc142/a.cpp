#include<bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin >> n;
    double odd = ceil(n / 2), eve =floor(n / 2);
    cout << odd / (odd + eve) << endl;
}