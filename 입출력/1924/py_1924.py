# 메모리: 30864KB, 코드 길이: 187B, 시간: 68ms
month=[31,28,31,30,31,30,31,31,30,31,30,31]
date=["SUN","MON", "TUE", "WED", "THU", "FRI", "SAT"]
x,y = map(int,input().split())
for i in range(0,x-1):
    y += month[i];
print(date[y%7])
