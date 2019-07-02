#include<bits/stdc++.h>
using namespace std;
#define max 100000+1
int main(){
    int n,m,sm=0,x[max]={0};
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int l,r,s;
        cin>>l>>r>>s;
        x[l]+=s;
        x[r+1]-=s;
        sm+=s;
    }
    int mi=INT_MAX;
    for(int i=1;i<=m;i++){
        x[i]+=x[i-1];
        mi=min(mi,x[i]);
    }
    cout<<sm-mi<<endl;
    return 0;
}