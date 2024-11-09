l=[]
t = int(input())
for i in range(t):
    n, s, m = map(int, input().split())
    segs = [(0, 0), (m, m)]

    for j in range(n):
        a, b = map(int, input().split())
        segs.append((a, b))

    segs.sort()

    for i in range(1, len(segs)):
        if segs[i][0] - segs[i - 1][1] >= s:
            print("YES")
            break
    else:
        print("NO")
# for i in l:
#     print(i)