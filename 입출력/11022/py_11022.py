# 메모리: 30860KB, 코드 길이: 124B, 시간: 80ms
T=int(input(""))
for i in range(T):
    A,B=map(int,input("").split())
    print("Case #%d: %d + %d = %d"%((i+1),A,B,(A+B)))
