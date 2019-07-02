s=[int(x) for x in input().split()]
f=['.'*(s[1]+2)]
for i in range(s[0]):
  f.append('.'+input()+'.')
f.append('.'*(s[1]+2))
for i in range(1,s[0]+1):
  for j in range(1,s[1]+1):
    if f[i][j]=='#':
      continue
    cnt = 0
    for v in [-1,0,1]:
      for h in [-1,0,1]:
        if f[i+v][j+h] =='#':
          cnt+=1
    f[i]=f[i][:j]+str(cnt)+f[i][j+1:]
print('\n'.join([x[1:-1] for x in f[1:-1]]))
      
