// 메모리: 1112KB, 코드 길이: 190B
#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }printf("\n");
    }
    return 0;
}
