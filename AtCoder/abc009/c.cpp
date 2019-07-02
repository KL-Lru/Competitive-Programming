#include<bits/stdc++.h>
using namespace std;
#define max 100
//97~122
int cnt[123]={},tscnt[123]={};

void swap(char *s,int a,int b){
    char tmp=s[a];
    s[a]=s[b];
    s[b]=tmp;
}

int sum_change(){
  int cn=0;
  for(int i=97;i<123;i++){
    cn+=cnt[i]-tscnt[i]<0?0:cnt[i]-tscnt[i];
  }
  return cn;
}

int main(){
    int n,k;
    char s[max],ts[max];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>s[i];
        ts[i]=s[i];
        cnt[s[i]]++;
        tscnt[ts[i]]++;
    }
    sort(ts,ts+n);
    int cnt_s=0;
    for(int i=0;i<n;i++){
      for(int j=0;j+i<n;j++){
        if(s[i]!=ts[i])cnt_s++;
        cnt[s[i]]--;
        tscnt[ts[i]]--;
        if(cnt_s+sum_change()>k){
          if(s[i]!=ts[i])cnt_s--;
          cnt[s[i]]++;
          tscnt[ts[i]]++;
          swap(ts,i,i+j);
        }else break;
      }
    }
    for(int i=0;i<n;i++) cout<<ts[i];
    cout<<endl;
    return 0;
}