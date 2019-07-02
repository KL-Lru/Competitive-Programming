#include<bits/stdc++.h>
using namespace std;
#define inf 5000
#define priMax 100
#define perMax 10
#define NMax 40

int Calc(int *a,int *b,int *c,int N,int Ma,int Mb){
    int ***sum;
    sum=new int**[N+1];
    for(int i=0;i<=N;i++)
        sum[i]=new int*[i*perMax+1];
    for(int i=0;i<=N;i++)
        for(int j=0;j<=i*perMax;j++)
            sum[i][j]=new int[i*perMax];
    for(int i=0;i<=N;i++)
        for(int j=0;j<=i*perMax;j++)
            for(int k=0;k<=i*perMax;k++)
                sum[i][j][k]=inf;

    sum[0][0][0]=0;
    for(int n=0;n<N;n++)
        for(int an=0;an<=n*perMax;an++)
            for(int bn=0;bn<=n*perMax;bn++){
                sum[n+1][an][bn] = min(sum[n][an][bn],sum[n+1][an][bn]);
                sum[n+1][an+a[n]][bn+b[n]] = min(sum[n][an][bn]+c[n],sum[n+1][an+a[n]][bn+b[n]]);
            }
    int res=inf;
    for(int an=0;an<=N*perMax;an++)
        for(int bn=0;bn<=N*perMax;bn++)
            if((an!=0||bn!=0)&&an*Mb==bn*Ma)res=min(sum[N][an][bn],res);
    if(res==inf) return -1;
    else return res;
}

int main(){
    int N,Ma,Mb;
    cin>>N;
    cin>>Ma;
    cin>>Mb;
    int a[N],b[N],c[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
        cin>>b[i];
        cin>>c[i];
    }
    cout<<Calc(a,b,c,N,Ma,Mb)<<endl;
    return 0;
}