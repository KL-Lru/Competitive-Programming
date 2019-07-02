from copy import deepcopy
fact = []
def init():
  fact.append(0)
  for i in range(1,101):
    fact.append(0)

def solve(n):
  cnt = 0
  for i in range(1,n+1):
    tp = i
    di = 2
    while tp != 1:
      if tp % di == 0:
        fact[di] += 1
        cnt += 1
        tp /= di
      else:
        di += 1
  sf = []
  tf = [] 
  ft = []
  f = []
  t = []
  for i in range(1,101):
    if fact[i] >= 74:
      sf.append(i)
    if fact[i] >= 24:
      tf.append(i)
    if fact[i] >= 14:
      ft.append(i)
    if fact[i] >= 4:
      f.append(i)
    if fact[i] >= 2:
      t.append(i)
  ans = len(sf)
  for i in tf:
    for j in t:
      if i != j:
        ans += 1
  for i in ft:
    for j in f:
      if i != j:
        ans += 1
  for i in f:
    for j in f:
      if i < j:
        for k in t:
          if i != k and j != k:
            ans += 1  
  return ans

n = int(input())
init()
print(solve(n))
