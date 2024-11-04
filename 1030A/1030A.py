n = int(input())
count = 0
choice = list(map(int,input().split()))
for i in choice:
    if i==1:
        count+=1
if count>0:
    print("HARD")
else:
    print("EASY")