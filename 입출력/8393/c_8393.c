// 메모리: 1112KB, 코드 길이: 162 B
#include <stdio.h>

int main() {
    int n;
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        sum += i;
    }printf("%d",sum);
    return 0;
}
