#include<bits/stdc++.h>
using namespace std;
int tri(int n){
    if(n<=2)return 0;
    int a[4]={0,0,1,1};
    for(int i=3;i<n;i++){
        a[3]=(a[2]+a[1]+a[0])%10007;
        a[0]=a[1];
        a[1]=a[2];
        a[2]=a[3];
    }
    return a[3];
}

int main(){
    int n;
    cin>>n;
    cout<<tri(n)<<endl;
    return 0;
}