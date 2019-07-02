#include<bits/stdc++.h>
using namespace std;
int Index(int num){
    return (num/100)*12+(num%100)/5;
}
int Time(int num){
    return (num*5/60)*100+num*5%60;
}
int main(){
    int n,s,e,i,se[12*24+2]={};
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%d-%d",&s,&e);
        s=s-s%5;
        e=e+(e%5==0?0:5)-e%5;
        se[Index(s)]++;
        se[Index(e)]--;
    }
    for(i=1;i<=12*24;i++)
        se[i]+=se[i-1];
        i=0;
    while(i<=12*24){
        while(se[i]<=0&&i<=12*24) i++;
        if(se[i]>0) printf("%04d-",Time(i));
        while(se[i]>0) i++;
        if(i<=12*24) printf("%04d\n",Time(i));
    }
    return 0;
}