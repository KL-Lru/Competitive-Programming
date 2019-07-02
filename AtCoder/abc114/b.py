s = input()
t = 753
ans = 1000000
for i in range(len(s)-2):
  ans = min(abs(int(s[i:i+3])-t), ans)
print(ans)