def isp(n):
    for i in range(2, n + 1):
        if i>1:
            for num in range(2,i):
                if(i%num) == 0:
                    return False
    return True
p =[i for i in range(1,1000001)]
p[0] = 0
p[1] = 0
count = 0
for i in range(2,1000001):
    if isp(i):
        count += 1
    p.append(count)
t=int(input())
while t:
    n,k=input().split()
    n = int(n)
    k = int(k)
    if p[n] > k:
        print("Divyam")
    else:
        print("Chef")
    t -= 1
