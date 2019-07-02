#include<bits/stdc++.h>
using namespace std;
#define nmax 20
#define inf 100000000

int sarary(int b[],int num,int n){
    bool und=true;
    int tmp=0,maxi=0,mini=0;
    for(int i=0;i<n;i++){
        if(num==b[i]){
            tmp=sarary(b,i+1,n);
            maxi=max(maxi,tmp);
            mini=mini==0?min(inf,tmp):min(mini,tmp);
        }
    }
    return maxi+mini+1;
}


int main(){
    int n,b[nmax+1];
    cin>>n;
    for(int i=1;i<n;i++)
        cin>>b[i];
    b[0]=0;
    cout<<sarary(b,1,n)<<endl;    
}