#include<bits/stdc++.h>
using namespace std;
#define nmax 9

int main(){
    int n;
    cin>>n;
    int count=pow(3,n);
    int s[nmax];
    for(int i=0;i<nmax;i++)
        s[i]=0;
    for(int i=0;i<count;i++){
        for(int j=n-1;j>=0;j--){
            switch(s[j]){
                case 0:cout<<"a"<<flush;break;
                case 1:cout<<"b"<<flush;break;
                case 2:cout<<"c"<<flush;break;
            }
        }
        cout<<endl;
        s[0]++;
        for(int j=0;j<n;j++){
            if(s[j]>2){
                s[j+1]++;
                s[j]=0;
            }
        }
    }
    return 0;
}
