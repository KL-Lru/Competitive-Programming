#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n;
  cin >> n;
  int cnt = 0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i%5==0){
        if(i==0){
          if(j%5 == 0 ||(j-2)%5==0) cout << "X";
          else{ 
            if(j == n-1 && ((j+1)%5 == 0|| (j-1)%5==0)) cout << "X";
            else cout << ".";
          }
        }else{
          if(i == n-1){
            if(j%5 == 0 ||(j-3)%5==0) cout << "X";
            else{ 
              if(j == n-1 && ((j+1)%5 == 0 ||(j-2)%5==0) ==0) cout << "X";
              else cout << ".";
            }
          }else{
            if(j%5 == 0) cout << "X";
            else {
              if(j == n-1 && (j+1)%5 == 0) cout << "X";
              else cout << ".";
            }
          }
        }
      }
      if(i%5 == 1){
        if(i == n-1){
          if((j+2)%5 == 0 ||(j-1)%5==0) cout << "X";
          else{ 
            if(j == n-1 && ((j+3)%5 ==0 || j%5==0 )) cout << "X";
            else cout << ".";
          }
        }else{
          if((j+2)%5==0) cout << "X";
          else{ 
            if(j == n-1 && (j+3)%5 ==0) cout << "X";
            else cout << ".";
          }
        }
      }
      if(i%5 == 2){
        if(i == n-1){
          if((j+4)%5 == 0 ||(j-4)%5==0) cout << "X";
          else{ 
            if(j == n-1 && (j%5 == 0 ||(j-3)%5==0)) cout << "X";
            else cout << ".";
          }
        }else{
          if((j+4)%5==0) cout << "X";
          else{ 
            if(j == n-1 && (j%5 == 0)) cout << "X";
            else cout << ".";
          }
        }
      }
      if(i%5 == 3){
        if(i == n-1){
          if(j == 0 || (j+1)%5 == 0 ||(j-2)%5==0) cout << "X";
          else{ 
            if(j == n-1 && ((j+2)%5 == 0 ||(j-1)%5==0)) cout << "X";
            else cout << ".";
          }
        }else{
          if(j == 0 || (j+1)%5==0) cout << "X";
          else{ 
            if(j == n-1 && ((j+2)%5 == 0)) cout << "X";
            else cout << ".";
          }
        }
      }
      if(i%5 == 4){
        if(i == n-1){
          if((j+3)%5 == 0 ||(j)%5==0) cout << "X";
          else{ 
            if(j == n-1 && ((j+4)%5 == 0 ||(j+1)%5==0)) cout << "X";
            else cout << ".";
          }
        }else{
          if((j+3)%5==0) cout << "X";
          else{ 
            if(j == n-1 && ((j+4)%5 == 0)) cout << "X";
            else cout << ".";
          }
        }
      }
    }
    cout << endl;
  }
}