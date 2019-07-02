#include<bits/stdc++.h>
using namespace std;
#define max 1000001
int main(){
    int n,a,b,ans;
    int h[max];
    for(int i=0;i<max;i++)h[i]=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        h[a]++;
        h[b+1]--;
    }
    ans=h[0];
    for(int i=1;i<max;i++){
        h[i]+=h[i-1];
        ans=ans<h[i]?h[i]:ans;
    }
    cout<<ans<<endl;
    return 0;
}