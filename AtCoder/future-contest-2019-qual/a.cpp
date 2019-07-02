#include<bits/stdc++.h>
using namespace std;
int main(){
  for(int i=0;i<29;i++){
    for(int j=0;j<29;j++){
      if(i == 0 || j == 0 || i == 29-1 || j == 29-1){
        cout << '#';
      }else{
        if(j%2 == 0 && i%2 == 0){
          if(i==14&&j==14){
            cout << ".";
          }else
            cout << '#';
        }else{
          cout << '.';
        }
      }
    }
    cout << endl;
  }
}