s = input()
c = False
f = False

for i in s:
  if i == 'C':
    c = True
  if i == 'F' and c:
    f = True
if f:
  print('Yes')
else:
  print('No')