#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==1)cout<<"YES"<<endl;
    else{
        if(a%b==c) cout<<"YES"<<endl;
        else {
            int tmp=((a%b)+a)%b,first=a%b;
            bool flag=false;
            while(tmp!=first){
                if(tmp==c) flag=true;
                tmp=(tmp+a)%b;
            }
            if(flag)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}