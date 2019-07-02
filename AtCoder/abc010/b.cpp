#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,cnt=0;
cin>>n;
for(int i=0;i<n;i++){
cin>>a;
while(a%2==0||a%3==2){
cnt++;
a--;
}
}
cout<<cnt<<endl;
}