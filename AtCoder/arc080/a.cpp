#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0,cnt2=0,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a%4==0) cnt++;
        else if(a%2==0) cnt2++;
    }
    n-=cnt2==0?0:cnt2-1;
    if((int)n/2<=cnt) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
