from pprint import pprint
n=int(input())
a=[int(i) for i in input().split()]
d={}
cnt=0
for i in a:
    if str(i) not in d:
        d[str(i)]=1
    else:
        d[str(i)]+=1
for i in d:
    if int(i)>d[i]:
        cnt+=d[i]
    else:
        if int(i)<d[i]:
            cnt+=d[i]-int(i)
print(cnt)
