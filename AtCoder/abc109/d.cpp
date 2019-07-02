#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int h,w;
int a[502][502];
vector<string> sv;
int sm[502];
int main(){
  cin>>h>>w;
  bool write_w=false,write_h=false;
  for(int i=1;i<=h;i++){
    for(int j=1;j<=w;j++){
     cin>>a[j][i];
    }
  }
  int j=1;
  for(int j=1;j<=h;j++){
    write_w = false;
    for(int i=1;i<w;i++){
      sm[j] = (a[i][j]+sm[j])%2;
      if(a[i][j]%2==1){
        if(write_w)
          write_w = false;
        else
          write_w = true;
      }
      if(write_w){
        sv.push_back(to_string(j) + " " + to_string(i) + " " + to_string(j) + " " + to_string(i+1));        
      }
    }
    sm[j] = (a[w][j]+sm[j])%2;
    if(j!=h){
      if(sm[j]==1){
        if(write_h)
          write_h = false;
        else
          write_h = true;
      }
        if(write_h)
          sv.push_back(to_string(j) + " " + to_string(w) + " " + to_string(j+1) + " " + to_string(w));
    }
  }
/*    */
  cout<<sv.size()<<endl;
  for(int i=0;i<sv.size();i++){
    cout<<sv[i]<<endl;
  }

}