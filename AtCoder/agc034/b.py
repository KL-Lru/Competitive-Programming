import re
s = input()
subs = re.sub('BC', 'X', s)

answer = 0
A = 0
for i in range(len(subs)):
    if subs[i] == 'A' :
        A += 1
    elif subs[i] == 'X':
        answer += A
    else:
        A = 0
print(answer)