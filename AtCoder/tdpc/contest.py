n=int(input())
a=[int(x) for x in input().split()]
d=[0,a[0]]
for i in range(1,len(a)):
  ld=len(d)
  d.extend([a[i]+d[j] for j in range(ld)])
  d=list(set(d))
print(len(d))