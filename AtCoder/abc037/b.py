import numpy as np

n, q = [int(x) for x in input().split()]
ans = np.zeros(n, dtype = int)
for i in range(q):
  l,r,t = [int(x) for x in input().split()]
  ans[l-1:r] = t
for i in range(n):
  print(ans[i])