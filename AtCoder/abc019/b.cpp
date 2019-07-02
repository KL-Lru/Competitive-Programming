#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int cnt=1;
    char c;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(i==0) c=s[i];
        else if(c==s[i]) cnt++;
        else{
            cout<<c<<cnt<<flush;
            c=s[i];
            cnt=1;
        }
    }
    cout<<c<<cnt<<endl;
    return 0;
}