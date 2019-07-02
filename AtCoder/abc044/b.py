s = input()

d = set()
for i in s:
  if i in d:
    d.remove(i)
  else:
    d.add(i)
if d == set():
  print('Yes')
else:
  print('No')