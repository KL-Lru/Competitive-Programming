#include<bits/stdc++.h>
#include<time.h>
using namespace std;

void sort3Vectors(vector<int> &a, vector<int> &b, vector<int> &c, vector<int> &base);
void sort4Vectors(vector<int> &a, vector<int> &b, vector<int> &c, vector<int> &d, vector<int> &base);

int main(){
  clock_t start_time = clock();
  // input
  int L, N, M;
	cin >> L >> N >> M;
	vector<int> R(N), P(N), I(N), A(M), B(M), C(M), D(M), X(N, -1), Y(N, -1), Z(N, -1);
  bool used[N] = {};
	for (int i = 0; i < N; i++){
		cin >> R[i] >> P[i];
    I[i] = i;
	}
	for (int i = 0; i < M; i++){
		cin >> A[i] >> B[i] >> C[i] >> D[i];
		A[i]--; B[i]--;
	}
  sort3Vectors(R,P,I,P);
  sort4Vectors(A,B,C,D,D);
  int z = 0, mz = 0, x = 0, y = 0, my = 0, iter = 0;
  while(z + 2*R[iter] <= L){
    while(y + 2*R[iter] <= L){
      while(x + 2*R[iter] <= L){
        if(used[I[iter]]){
          iter++;
          continue;
        }
        X[I[iter]] = x + R[iter];
        Y[I[iter]] = y + R[iter];
        Z[I[iter]] = z + R[iter];
        x += 2*R[iter];
        my = max(my, 2*R[iter]);
        mz = max(mz, 2*R[iter]);
        iter++;
        while(used[iter]) iter++;
      }
      for(int i = iter + 1; i < N; i++){
        if(used[i]) continue;
        if(x + 2*R[i] <= L){
          X[I[i]] = x + R[i];
          Y[I[i]] = y + R[i];
          Z[I[i]] = z + R[i];
          x += 2*R[i];
          my = max(my, 2*R[iter]);
          mz = max(mz, 2*R[i]);
          used[i] = true;
        }
      }
      y += my;
      my = 0;
      x = 0;
    }
    for(int i = iter + 1; i < N; i++){
      if(used[i]) continue;
      if(x + 2*R[i] <= L && y + 2*R[i] <= L){
        X[I[i]] = x + R[i];
        Y[I[i]] = y + R[i];
        Z[I[i]] = z + R[i];
        x += 2*R[i];
        y += 2*R[i];
        mz = max(mz, 2*R[i]);
        used[i] = true;
      }
    }
    z += mz;
    x = 0;
    y = 0;
    mz = 0;
  }
  clock_t cur_time = clock();

  // output
  for (int i = 0; i < N; i++){
    // if(X[i] != -1)
      cout << X[i] << " " << Y[i] << " " << Z[i] << endl;
	}

}

void sort3Vectors(vector<int> &a, vector<int> &b, vector<int> &c, vector<int> &base){
	int n = a.size();
	vector<int> p(n), av(n), bv(n), cv(n);
	for (int i = 0; i < n; i++){
		p[i] = i;
	}
  sort(p.begin(), p.end(), [&](int a,int b){
    return base[a] > base[b];}
  );
	for (int i = 0; i < n; i++){
    av[i] = a[p[i]];
    bv[i] = b[p[i]];
    cv[i] = c[p[i]];
  }
  a = av;
  b = bv;
  c = cv;
}

void sort4Vectors(vector<int> &a, vector<int> &b, vector<int> &c, vector<int> &d, vector<int> &base){
	int n = a.size();
	vector<int> p(n), av(n), bv(n), cv(n), dv(n);
	for (int i = 0; i < n; i++){
		p[i] = i;
	}
  sort(p.begin(), p.end(), [&](int a,int b){
    return base[a] > base[b];}
  );
	for (int i = 0; i < n; i++){
    av[i] = a[p[i]];
    bv[i] = b[p[i]];
    cv[i] = c[p[i]];
    dv[i] = d[p[i]];
  }
  a = av;
  b = bv;
  c = cv;
  d = dv;
}

