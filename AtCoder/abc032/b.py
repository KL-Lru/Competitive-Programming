s = input()
n =int(input())

se = set()
for i in range(len(s)-n+1):
  se.add(s[i:i+n])
print(len(se))
