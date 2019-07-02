#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a=0,b=n,c=0;
    while(2*a+3*b+4*c!=m&&b>=0){
        if(2*a+3*b+4*c<m){b--;c++;}
        if(2*a+3*b+4*c>m){b--;a++;}
    }
    if(b<0) cout<<"-1 -1 -1"<<endl;
    else cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
