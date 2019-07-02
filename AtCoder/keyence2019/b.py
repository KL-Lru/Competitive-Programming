s = input()

f = False
for i in range(len(s)):
  for j in range(i,len(s)):
    if s[:i] + s[j:] == 'keyence':
      f = True

if f:
  print('YES')
else:
  print('NO')