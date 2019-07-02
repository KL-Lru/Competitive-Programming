n=int(input())
dist=sorted([int(x) for x in input().split()])
print(dist[-1]-dist[0])