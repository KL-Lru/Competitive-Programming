n = int(input())
s = input()
mx = 0
for i in range(1,n):
  cnt = 0
  for j in range(ord('a'), ord('z')+1):
    c = chr(j)
    if c in s[0:i] and c in s[i:n]:
      cnt += 1
  mx = max(cnt, mx)
print(mx)