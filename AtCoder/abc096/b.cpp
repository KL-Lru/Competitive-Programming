    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
      int a,b,c,k;
      cin>>a>>b>>c>>k;
      if(a>=b&&a>=c) while(k!=0) {a*=2;k--;}
      else if(b>=a&&b>=c) while(k!=0) {b*=2;k--;}
      else if(b<=c&&a<=c) while(k!=0) {c*=2;k--;}
    cout<<a+b+c<<endl;
    }