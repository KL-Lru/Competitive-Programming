s = input()

result = ""
for i in s:
  if i == 'B':
    result = result[:-1]
  else:
    result = result + i
print(result)