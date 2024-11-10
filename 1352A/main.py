l=[]
t = int(input())
for i in range(t):
    n = int(input())
    mul = 1
    ans = []
    while(n>0):
        if(n%10!=0):
            ans.append((n%10)*mul)
        n = n//10
        mul = mul*10
    print(len(ans))
    for i in ans:
        print(i,end=" ")
# for i in l:
#     print(i)