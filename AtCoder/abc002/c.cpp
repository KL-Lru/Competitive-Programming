#include<bits/stdc++.h>
using namespace std;
int main(){
    double x[3],y[3];
    for(int i=0;i<3;i++) cin>>x[i]>>y[i];
    double a,b,c,s;
    a=sqrt((x[1]-x[0])*(x[1]-x[0])+(y[1]-y[0])*(y[1]-y[0]));
    b=sqrt((x[2]-x[1])*(x[2]-x[1])+(y[2]-y[1])*(y[2]-y[1]));
    c=sqrt((x[0]-x[2])*(x[0]-x[2])+(y[0]-y[2])*(y[0]-y[2]));
    s=(a+b+c)/2;
    printf("%.1f\n",sqrt(s*(s-a)*(s-b)*(s-c)));
}