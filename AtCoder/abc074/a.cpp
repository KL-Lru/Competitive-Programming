#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c,d,e,f,v=0,s=0;
  double p=0;
  cin>>a>>b>>c>>d>>e>>f;
  for(int i=0;a*100*i<=f;i++){
    for(int j=0;b*100*j+a*100*i<=f;j++){
      if(i==0&&j==0) continue;
      for(int k=0;b*100*j+a*100*i+c*k<=f&&(a*i+b*j)*e>=c*k;k++){
        for(int l=0;b*100*j+a*100*i+c*k+d*l<=f&&(a*i+b*j)*e>= c*k+d*l;l++){
          if(k==0&&l==0) continue;
          if(p<(c*k+d*l)/(double)(b*100*j+a*100*i+c*k+d*l)){
            v=b*100*j+a*100*i+c*k+d*l;
            s=c*k+d*l;
            p=s/(double)v;
          }
        }
      }
    }
  }
  if(v==0&&s==0){
    for(int i=0;a*100*i<=f;i++){
      for(int j=0;b*100*j+a*100*i<=f;j++){
        v=max(v,b*100*j+a*100*i);
      }
    }
  }
  cout<<v<<" "<<s<<endl;
  return 0;
}