#include<bits/stdc++.h>
    using namespace std;
    int main(){
      int n;
      int t1=0,x1=0,y1=0,t2,x2,y2,d;
      cin>>n;
      bool f=true;
      for(int i=0;i<n&&f;i++){
        cin>>t2>>x2>>y2;
        d=abs(x2-x1)+abs(y2-y1);
        if(d<=t2-t1&&(t2-t1)%2==d%2)
          continue;
        else
          f=false;
        t1=t2;x1=x2;y1=y2;
      }
      cout<<(f?"Yes":"No")<<endl;
      return 0;
    }