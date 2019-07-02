#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,a,ans=0;
    cin>>n>>x;
    for(int i=0;n!=0&&i<n;i++){
        int bit=x%2;
        x=(x-bit)/2;
        cin>>a;
        if(bit==1)ans+=a;
    }
    cout<<ans<<endl;
    return 0;
}