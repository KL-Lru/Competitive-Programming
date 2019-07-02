import re
z=re.split('\s',input())
s=input()
print("Yes") if re.match("\d{"+z[0]+"}-\d{"+z[1]+"}",s) else print("No")