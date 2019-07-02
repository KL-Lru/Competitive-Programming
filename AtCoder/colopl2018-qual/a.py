a,b = [int(x) for x in input().split()]
s = input()

if len(s)>= a and len(s) <=b:
  print('YES')
else:
  print('NO')