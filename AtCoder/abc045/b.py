a = input()
b = input()
c = input()
d = {
  'a':a, 
  'b':b,
  'c':c
}
n = 'a'
while(True):
  if d[n] == '':
    break
  nx = d[n][0]
  d[n] = d[n][1:]
  n = nx

print(n.upper())