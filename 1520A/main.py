l=[]
t = int(input())
for i in range(t):
    n = int(input())
    s = input()
    curr = s[0]
    c = set()
    flag = False
    for i in s:
        if i!=curr and i in c:
            flag = True
            break
        c.add(i)
        curr = i
    if flag:
        print("NO")
    else:
        print("YES")
# for i in l:
#     print(i)