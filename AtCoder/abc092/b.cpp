#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,cta=1,ctb=1,sum;
  char f[100][100];
  cin>>a>>b;
  for(int i=0;i<100;i++){
    for(int j=0;j<100;j++){
      if(i==0)
        f[i][j]='.';
      else f[i][j]=(j>=50?'#':'.');
    }
  }
  cout<<100<<" "<<100<<endl;
  for(int i=0;a!=cta;i++){
    int y=2+i*2;
    for(int j=1;a!=cta&&j<25;j++){
      int x=50-j*2;
      for(int xp=x-1;xp<=x+1;xp++){
        for(int yp=y-1;yp<=y+1;yp++){
          if(xp==x&&yp==y) continue;
          f[yp][xp]='#';
        }
      }
      cta++;
    }
  }
  for(int i=0;b!=ctb;i++){
    int y=2+i*2;
    for(int j=1;b!=ctb&&j<25;j++){
      int x=50+j*2;
      for(int xp=x-1;xp<=x+1;xp++){
        for(int yp=y-1;yp<=y+1;yp++){
          if(xp==x&&yp==y) continue;
          f[yp][xp]='.';
        }
      }
      ctb++;
    }
  }
  for(int i=0;i<100;i++){
    for(int j=0;j<100;j++){
      cout<<f[i][j];
    }
    cout<<endl;
  }

}