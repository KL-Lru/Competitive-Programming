#include<bits/stdc++.h>
using namespace std;
int main(){
  float a,b,c,d;
  cin>>a>>b>>c>>d;
  cout<<(b/a > d/c?"TAKAHASHI":(b/a < d/c?"AOKI":"DRAW"))<<endl;
}