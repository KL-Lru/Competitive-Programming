#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    char ans;
    bool pl=false,mi=false;
    cin>>a>>b>>c;
    if(a+b==c)pl=true;
    if(a-b==c)mi=true;
    if(pl&&!mi)ans='+';
    if(!pl&&mi)ans='-';
    if(pl&&mi)ans='?';
    if(!pl&&!mi)ans='!';
    cout<<ans<<endl;
    return 0;
}
