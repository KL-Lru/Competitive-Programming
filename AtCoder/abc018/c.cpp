#include<bits/stdc++.h>
using namespace std;
#define max 500
int main(){
    int r,c,k,ct=0;
    int i,j,x,y,ro;
    char s[max][max];
    int u[max][max]={},d[max][max]={};
    cin>>r>>c>>k;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>s[i][j];
        }
    }
    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
            if(i==0){
                if(s[i][j]=='o')u[i][j]=1;
                else u[i][j]=0;
            }else{
                if(s[i][j]=='o')u[i][j]=u[i-1][j]+1;
                else u[i][j]=0;
            }
        }
    for(i=r-1;i>=0;i--)
        for(j=c-1;j>=0;j--){
            if(i==r-1){
                if(s[i][j]=='o')d[i][j]=1;
                else d[i][j]=0;
            }else{
                if(s[i][j]=='o')d[i][j]=d[i+1][j]+1;
                else d[i][j]=0;
            }
        }
    for(x=k-1;x<r-k+1;x++){
        for(y=k-1;y<c-k+1;y++){
            bool br=true;
            for(ro=-(k-1);ro<=k+1&&br;ro++){
                if(u[x][y+ro]<k-abs(ro)||d[x][y+ro]<k-abs(ro))br=false;
            }
            if(br)ct++;
        }
    }
    cout<<ct<<endl;
    return 0;
}