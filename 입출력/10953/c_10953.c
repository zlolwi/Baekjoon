// 메모리: 1112KB, 코드 길이: 172B
#include <stdio.h>

int main() {
    int T,A,B,i;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d, %d",&A,&B);
        printf("%d\n",A+B);
    }
    return 0;
}
