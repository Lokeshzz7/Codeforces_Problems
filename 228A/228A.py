l = list(map(int,input().split()))
s = set()
for i in range(4):
    s.add(l[i])
print(4 - len(s))