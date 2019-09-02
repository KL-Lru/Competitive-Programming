#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  priority_queue<double, vector<double>, greater<double>> val;
  double v;
  for(int i=0;i<n;i++){
    cin >> v;
    val.push(v);
  }
  while(val.size()!= 1){
    double x,y;
    x = val.top();val.pop();
    y = val.top();val.pop();
    val.push((x+y)/2);
  }
  cout << setprecision(15) << val.top() << endl;
}