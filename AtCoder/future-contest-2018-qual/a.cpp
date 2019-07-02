#include<bits/stdc++.h>
#include<time.h>
using namespace std;
#define N 100
#define MAL 1000
#define CONS 10
#define BASE 200000000
int a[N][N]={};
int b[N][N]={};

int eval(){
  long long score = 0;
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      score += abs(a[i][j] - b[i][j]);
    }
  }
  return score;
}

int init(int x[], int y[], int h[]){
  for(int i=0;i<MAL;i++){
    int tx = x[i], ty = y[i], th = h[i];
    for(int s=0;s<N;s++){
      for(int t=0;t<N;t++){
        b[s][t] += max(0,th-abs(tx-s)-abs(ty-t));
      }
    }
  }
  return eval();
}

int update(int x[], int y[], int h[], long long score){
  int taridx = rand()%MAL;
  int dstx = x[taridx], dsty = y[taridx], dsth = h[taridx];
  for(int s=0;s<N;s++){
    for(int t=0;t<N;t++){
      b[s][t] -= max(0,dsth-abs(dstx-s)-abs(dsty-t));
    }
  }
  int newx = rand()%N, newy = rand()%N, newh = rand()%N+1;
  for(int s=0;s<N;s++){
    for(int t=0;t<N;t++){
      b[s][t] += max(0,newh-abs(newx-s)-abs(newy-t));
    }
  }
  long long new_score = eval();
  if(score > new_score){
    for(int s=0;s<N;s++){
      for(int t=0;t<N;t++){
        b[s][t] += max(0,dsth-abs(dstx-s)-abs(dsty-t));
      }
    }
    for(int s=0;s<N;s++){
      for(int t=0;t<N;t++){
        b[s][t] -= max(0,newh-abs(newx-s)-abs(newy-t));
      }
    }
    return score;
  }else{
    x[taridx] = newx;
    y[taridx] = newy;
    h[taridx] = newh;
  }
  return new_score;
}

int main(){
  clock_t start = clock();
  int x[MAL], y[MAL], h[MAL];
  int mx = 0;
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cin >> a[j][i];
      mx = min(max(mx, a[j][i]),100);
    }
  }
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
    }
  }
  cout << MAL << endl;
  for(int i=0;i<MAL;i++){
    x[i] = rand()%N;
    y[i] = rand()%N;
    h[i] = rand()%N+1;
  }
  long long score = init(x, y, h);
  clock_t cr = clock();
  while((cr-start)/CLOCKS_PER_SEC < 5){
    update(x,y,h,score);
    cr = clock();
  }
  for(int i=0;i<MAL;i++){
    cout << x[i] << " " << y[i] << " " << h[i] << endl;
  }
}