l=[]
t = int(input())
for i in range(t):
    a,b,c = map(int,input().split())
    if a<b and b<c:
        l.append("STAIR")
    elif a<b and b>c:
        l.append("PEAK")
    else:
        l.append("NONE")
for i in l:
    print(i)