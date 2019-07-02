#include<bits/stdc++.h>
using namespace std;
#define lim 100000
int main(){
    int n,m,x,y;
    int num[lim+1];
    bool f[lim+1]={};
    fill(num,num+lim+1,1);
    f[1]=true;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        if(f[x])f[y]=true;
        num[x]--;num[y]++;
        if(num[x]==0)f[x]=false;
    }
    cout<<count(f,f+lim+1,true)<<endl;
}