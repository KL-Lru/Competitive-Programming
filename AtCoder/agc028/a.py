def gcd(a,b):
  if b == 0:
    return a
  else:
    return gcd(b, a%b)

def lcm(a,b):
  return a * b / gcd(a,b)

n,m = [int(x) for x in input().split()]
s = input()
t = input()
l = lcm(n,m)
d = {}
for i in range(n):
  d[i * l / n] = s[i]
for i in range(m):
  if i in d and d[i * l / m] != t[i]:
    l = -1
    break

print(int(l))