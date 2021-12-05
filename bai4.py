def sumdigit(x):
    tmp:int=x
    a:int=0
    while tmp>0:
        a+=tmp%10
        tmp=tmp//10
    return a

n:int=int(input())
print(sumdigit(n))
ans:int=0
for i in range(1,n+1):
    ans+=sumdigit(i)
print(ans)  
