#include<bits/stdc++.h>
using namespace std;
#define max 100000
#define ll long long

int main(){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    int a[max],b[max];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    ll time=0;
    int i=0,j=0,count=0;
    while(i<n&&j<m){
        while(a[i]<time&&i<n)
            i++;
        if(i==n)break;
        time=a[i]+x;
        while(b[j]<time&&j<m)
            j++;
        if(j==m)break;
        time=b[j]+y;
        count++;
    }
    cout<<count<<endl;
    return 0;
}