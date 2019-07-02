#include<bits/stdc++.h>
using namespace std;
#define max 10

int main(){
    int a[5];
    for(int i=0;i<5;i++)  
        cin>>a[i];
    int ary[max];
    int count=0,tmp;
    for(int i=0;i<3;i++)
        for(int j=i+1;j<4;j++)
            for(int k=j+1;k<5;k++)
                ary[count++]=a[i]+a[j]+a[k];
    for(int i=0;i<max;i++)
        for(int j=0;j<max-1-i;j++)
            if(ary[j]<ary[j+1]){
                tmp=ary[j];
                ary[j]=ary[j+1];
                ary[j+1]=tmp;
            } 
    tmp=0;
    count=0;
    for(int i=0;i<max;i++){
        if(tmp!=ary[i])count++;
        if(count==3){
            cout<<ary[i]<<endl;
            break;
        }
    }
}