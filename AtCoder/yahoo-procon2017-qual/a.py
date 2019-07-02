s = input()
ｔｓ = list('yahoo')
for x in s:
  if x in ts:
    ts.remove(x)
if ts == []:
  print('YES')
else:
  print('NO')