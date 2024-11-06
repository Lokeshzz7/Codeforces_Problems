l=[]
t = int(input())
for i in range(t):
    a,b,c = map(int,input().split())
    if a+b >= 10 or b+c >= 10 or a+c >= 100:
        l.append("YES")
    else:
        l.append("NO")
for i in l:
    print(i)