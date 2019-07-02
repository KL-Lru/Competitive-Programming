n = int(input())
mod = 1000000007
ans = 0
for i in range(1,n+1):
  j = n//i
  ans = (ans+(i**10-(i-1)**10)*j**10)%mod
print(ans)