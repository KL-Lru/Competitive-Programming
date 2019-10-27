#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,x;
    cin >> a >> b >> x;
    if(x/(a*b*a) > 1/2.0){
        // a(b+(b-atanθ))/2 == x/a
        cout << setprecision(8) << (180*atan(-2*x/pow(a,3)+2*b/a)/M_PI) << endl;
    }else{
        // b^2tan(90-θ)/2 == x/a
        cout << setprecision(8) << (180*atan(pow(b,2)*a/(2*x))/M_PI) << endl;
    }
}