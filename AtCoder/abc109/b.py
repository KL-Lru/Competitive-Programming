n = int(input())
words = []
f = True
for i in range(n):
  w = input()
  if w in words:
    f = False
  if i != 0:
    if words[-1][-1] != w[0]:
      f = False 
  words.append(w)
if f:
  print("Yes")
else:
  print("No")