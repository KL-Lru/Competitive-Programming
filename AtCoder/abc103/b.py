s1=input()
s2=input()
f = False
for i in range(len(s1)):
  if s1==s2:
    f = True
    break
  else:
    s1=s1[-1]+s1[:-1]
if f:
  print("Yes")
else:
  print("No")