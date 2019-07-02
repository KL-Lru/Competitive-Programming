n,m = [int(x) for x in input().split()]
f = set()
t = set()
ans = False
for i in range(m):
  a,b = [int(x) for x in input().split()]
  if a == 1:
    f.add(b)
  if b == n:
    t.add(a)
for i in f:
  if i in t:
    ans = True
    break
if ans:
  print("POSSIBLE")
else:
  print("IMPOSSIBLE")