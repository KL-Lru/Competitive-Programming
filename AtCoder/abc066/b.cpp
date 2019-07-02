#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    bool f=true;
    cin>>s;
    s.pop_back();
    while(s.length()!=0){
        f=true;
        if(s.length()%2==0){
            for(int i=0;i<s.length()/2;i++){
                if(s[i]!=s[(s.length()/2)+i]) f=false;
                if(!f)break;
            }
            if(f){
                cout<<s.length()<<endl;
                break;
            }
        }
        s.pop_back();
    }
    return 0;
}