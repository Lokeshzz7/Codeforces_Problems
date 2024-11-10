# l=[]
# t = int(input())
# for i in range(t):
n = int(input())
l = list(map(int,input().split()))

police = 0
untreated = 0

for i in l:
    if i==-1:
        if police==0:
            untreated+=1
        else:
            police-=1
    else:
        police += i
print(untreated)

# for i in l:
#     print(i)