// 메모리: 1112KB, 코드 길이: 159B
#include <stdio.h>

int main() {
    int N,i;
    scanf("%d",&N);
    for(i=1;i<=9;i++){
        printf("%d * %d = %d\n",N,i,(i*N));
    }
    
    return 0;
}
