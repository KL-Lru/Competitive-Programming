#include<bits/stdc++.h>
using namespace std;
int main(){
int n,s,t,w,tp=0,cnt=0;
cin>>n>>s>>t;
for(int i=0;i<n;i++){
cin>>w;
tp+=w;
if(s<=tp&&tp<=t) cnt++;
}
cout<<cnt<<endl;
return 0;
}