#include<bits/stdc++.h>
using namespace std;
#define inf INT_MAX/2-1
int main(){
    int n,m;
    cin>>n>>m;
    int h[11][11];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            h[i][j]=(i==j?0:inf);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        h[a][b]=1;
        h[b][a]=1;
    }
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                h[i][j]=min(h[i][j],h[i][k]+h[k][j]);
    for(int i=1;i<=n;i++){
        int ct=0;
        for(int j=1;j<=n;j++){
            if(h[i][j]==2)ct++;
        }
        cout<<ct<<endl;
    }
    return 0;
}