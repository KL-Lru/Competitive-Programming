a=int(input())
b=int(input())
c=int(input())

re={}
re[max(a,b,c)]='1'
re[min(a,b,c)]='3'
if a not in re: re[a]='2'
if b not in re: re[b]='2'
if c not in re: re[c]='2'
print(re[a]+'\n'+re[b]+'\n'+re[c])
