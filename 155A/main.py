# l=[]
# t = int(input())
# for i in range(t):
n = int(input())
l = list(map(int,input().split()))
c=0
maxi = l[0]
mini = l[0]
for i in l[1:]:
    if i>maxi:
        maxi = i
        c+=1
    if i<mini:
        mini = i
        c+=1
print(c)

# for i in l:
#     print(i)