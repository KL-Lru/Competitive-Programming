from collections import defaultdict
input()
a = [int(x) for x in input().split()]
input()
b = [int(x) for x in input().split()]
dic = defaultdict(int)
flag = True
for i in a:
  dic[i] += 1
for i in b:
  dic[i] -= 1
  if dic[i] < 0:
    flag = False
if flag: print('YES')
else: print('NO')