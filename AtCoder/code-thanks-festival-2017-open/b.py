s=input()
for i in range(len(s)):
  p=s+s[:i][::-1]
  if p == p[::-1]:
    print(i)
    break