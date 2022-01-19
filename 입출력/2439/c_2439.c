// 메모리: 1112KB, 코드 길이: 267B
#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N-i;j++) {
             printf(" ");
        }
        for(int j=1;j<=i;j++) {
            printf("*");
        }printf("\n");
    }
    
    return 0;
}
