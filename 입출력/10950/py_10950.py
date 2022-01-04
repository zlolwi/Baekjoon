# 메모리:29200KB, 코드 길이:160B, 시간:68ms
T = int(input(""))
sum=[]
for i in range(T):
    A,B = input("").split()
    A=int(A)
    B=int(B)
    sum.append(A+B)
    
for i in range(T):
    print(sum[i])
