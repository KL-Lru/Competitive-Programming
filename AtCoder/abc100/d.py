n,m = [int(x) for x in input().split()]
b=[]
mx = 0
for i in range(n):
  a = [int(x) for x in input().split()]
  b.append(a)
b.sort(key = lambda x: x[0]+x[1]+x[2],reverse = True)
mx = max(mx, sum([x[0]+x[1]+x[2] for x in b[:m]]))

b.sort(key = lambda x: x[0]+x[1]-x[2],reverse = True)
mx = max(mx, sum([x[0]+x[1]-x[2] for x in b[:m]]))

b.sort(key = lambda x: x[0]-x[1]+x[2],reverse = True)
mx = max(mx, sum([x[0]-x[1]+x[2] for x in b[:m]]))

b.sort(key = lambda x: x[0]-x[1]-x[2],reverse = True)
mx = max(mx, sum([x[0]-x[1]-x[2] for x in b[:m]]))

b.sort(key = lambda x: -x[0]+x[1]+x[2],reverse = True)
mx = max(mx, sum([-x[0]+x[1]+x[2] for x in b[:m]]))

b.sort(key = lambda x: -x[0]+x[1]-x[2],reverse = True)
mx = max(mx, sum([-x[0]+x[1]-x[2] for x in b[:m]]))

b.sort(key = lambda x: -x[0]-x[1]+x[2],reverse = True)
mx = max(mx, sum([-x[0]-x[1]+x[2] for x in b[:m]]))

b.sort(key = lambda x: -x[0]-x[1]-x[2],reverse = True)
mx = max(mx, sum([-x[0]-x[1]-x[2] for x in b[:m]]))
print(mx)