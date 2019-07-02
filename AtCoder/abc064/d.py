n = input()
s = input()
lcnt = 0
rcnt = 0
for i in s:
  if i == '(':
    rcnt+=1
  else :
    if rcnt == 0:
      lcnt += 1
    else:
      rcnt -= 1
for i in range(lcnt):
  s = '(' + s
for i in range(rcnt):
  s = s + ')'
print(s)