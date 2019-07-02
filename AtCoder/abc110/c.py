from pprint import pprint
s=input()
t=input()
d={}
for c in 'abcdefghijklmnopqrstuvwxyz':
  d[c]=set()
for c1, c2 in zip(s,t):
  d[c1].add(c2)
te = set()
for key in d.keys():
  if len(d[key]) >= 2:
    print("No")
    break
  if len(d[key]) == 1:
    val = list(d[key])[0]
    if val in te:
      print("No")
      break
    te.add(val)
else:
  print("Yes")
