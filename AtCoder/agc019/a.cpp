#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int q,h,s,d,n;
    //0.25 0.5 1 2
    cin>>q>>h>>s>>d>>n;
    ll ans=0;
    while(n!=0){
        if(n>=2){
            ans+=min({q*8,h*4,s*2,d});
            n-=2;
        }else if(n>=1){
            ans+=min({q*4,h*2,s});
            n-=1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
