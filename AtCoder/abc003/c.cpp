#include<bits/stdc++.h>
using namespace std;
#define max 100

int main(){
    int n,k;
    int r[max];
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>r[i];
    for(int i=0;i<k;i++)
        for(int j=1;j<n;j++){
            if(r[n-j]>r[n-j-1]){
                int tmp=r[n-j];
                r[n-j]=r[n-j-1];
                r[n-j-1]=tmp;
            }
        }
    double rate=0;
    for(int i=1;i<=k;i++)
        rate=(rate+r[k-i])/2;
    printf("%f",rate);
    return 0;
}