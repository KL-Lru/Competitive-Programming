n = int(input())
dc = {}
for i in range(n):
  s = input()
  if s in dc:
    dc[s] += 1
  else :
    dc[s] = 1
m = int(input())
for i in range(m):
  t = input()
  if t in dc:
    dc[t] -= 1
  else :
    dc[t] = -1
ans = 0
for i in dc:
  ans = max(ans, dc[i])
print(ans)