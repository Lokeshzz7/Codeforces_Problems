l=[]
t = int(input())
for i in range(t):
    a,b,c = map(int,input().split())
    k = c - (c%a) + b
    if k > c:
        k -= a
    l.append(k)
for i in l:
    print(i)