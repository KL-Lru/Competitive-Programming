#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool f=true;
    for(int i=0;i<s.length()&&f;i++){
        if(s[i]=='c'&&i+1<s.length()){
            if(s[i+1]=='h')i++;
            else f=false;
        }else{ 
            if(!(s[i]=='o'||s[i]=='k'||s[i]=='u')) f=false;
        }
    }
    if(!f)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}