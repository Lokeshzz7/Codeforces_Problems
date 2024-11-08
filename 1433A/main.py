l=[]
t = int(input())
for i in range(t):
    n = int(input())
    l = len(str(n))
    s = ((n%10)-1)*10 + (l * (l + 1))//2
    print(s)
# for i in l:
#     print(i)