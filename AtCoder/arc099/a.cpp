#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  int a,cnt=0;
  for(int i=0;i<n;i++){
    cin>>a;
    if(a == 1){
      cnt += ceil(i/(double)(k-1));
      cnt += ceil((n-i-1)/(double)(k-1));
      for(int j=1;j<k-1;j++){
        int tmp = 1;
        tmp += ceil((i-(k-j-1)>0?i-(k-j-1):0)/(double)(k-1));
        tmp += ceil(((n-i-1-j)>0?(n-i-1-j):0)/(double)(k-1));
        cnt = min(cnt, tmp);
      }
    }
  }
  cout<<cnt<<endl;
}