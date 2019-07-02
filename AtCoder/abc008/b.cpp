#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
string s[50];
cin>>n;
for(int i=0;i<n;i++)
cin>>s[i];
pair<int,string> p=make_pair(0,"");
for(int i=0;i<n;i++){
int count=0;
for(int j=0;j<n;j++)
if(s[i]==s[j])count++;
if(p.first<count)p=make_pair(count,s[i]);
}
cout<<p.second<<endl;
}