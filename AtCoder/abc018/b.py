s=str(input())
n=int(input())

for i in range(0,n): 
    pl=list(map(int,input().split()))
    if pl[0]==1:
        s=s[pl[1]-1::-1]+s[pl[1]::1]
    else :
        s=s[0:pl[0]-1:1]+s[pl[1]-1:pl[0]-2:-1]+s[pl[1]::1]
#end for i
print(s)
