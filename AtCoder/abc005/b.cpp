#include<bits/stdc++.h>
using namespace std;
int main(){
int a=200,b,n;
cin>>n;
for(int i=0;i<n;i++){
cin>>b;
a=min(a,b);
}
cout<<a<<endl;
return 0;
}