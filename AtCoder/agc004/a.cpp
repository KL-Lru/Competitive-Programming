#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll a,b,c;

    //input
    cin>>a>>b>>c;

    //calculation answer
    ll answer=0;
    if(a%2&&b%2&&c%2) answer=min(min(a*b,b*c),c*a);
    cout<<answer<<endl;
    return 0;
}