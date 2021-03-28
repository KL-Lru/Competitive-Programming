#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  int x0, y0, xhalf, yhalf;
  cin >> n >> x0 >> y0 >> xhalf >> yhalf;
  double cx = (xhalf + x0) / 2.0, cy = (yhalf + y0) / 2.0;
  double rad = 2 * M_PI / (double)n;
  double ansx = cos(rad) * x0 - sin(rad) * y0 + cx - cx * cos(rad) + cy * sin(rad);
  double ansy = sin(rad) * x0 + cos(rad) * y0 + cy - cx * sin(rad) - cy * cos(rad);
  cout << setprecision(10) << ansx << " " << ansy << endl;
}