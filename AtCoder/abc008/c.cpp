#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int c[100],s[100];
    cin>>n;
    for(int i=0;i<n;i++){cin>>c[i];s[i]=0;}
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(c[i]%c[j]==0)s[i]++;
    double ans=0;
    for(int i=0;i<n;i++)
        ans+=s[i]%2==0?1/2.0:(s[i]+1)/(double)(2*s[i]);
    printf("%.6f\n",ans);
    return 0;
}
