// 메모리: 1112KB, 코드 길이: 194B
#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(int i=N;i>0;i--){
        for(int j=i;j>0;j--){
            printf("*");
        }printf("\n");
    }
    
    return 0;
}
