#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,k,s,t;
cin>>a>>b>>c>>k>>s>>t;
cout<<(a*s+b*t-(s+t>=k?c:0)*(s+t))<<endl;
return 0;
}