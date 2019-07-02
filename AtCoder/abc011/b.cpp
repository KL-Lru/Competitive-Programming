#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
if(s[0]>='a') s[0]-=32;
for(int i=1;i<s.length();i++)
    if(s[i]<='Z') s[i]+=32;
cout<<s<<endl;
return 0;
}