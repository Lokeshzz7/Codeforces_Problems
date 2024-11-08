l=[]
t = int(input())
for i in range(t):
    a,b,c = map(int,input().split())
    if (a > b and a < c) or (a < b and a > c):
        l.append(a)
    elif (b > a and b < c) or (b < a and b > c):
        l.append(b)
    else:
        l.append(c)
for i in l:
    print(i)