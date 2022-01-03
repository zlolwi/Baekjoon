#include <stdio.h>
// 메모리: 1112KB, 코드 길이: 255B
int main() {
    int T,A,B;
    scanf("%d",&T);
    int sum[T];
    
    for(int i = 0;i<T;i++){
        scanf("%d %d",&A,&B);
        sum[i] = A+B;
    }
    for(int i = 0;i<T;i++){
        printf("%d\n",sum[i]);
    }
    return 0;
}


// RUNTIME ERROR
/*
#include <stdio.h>
#define MAX 10
int main() {
    int T,A,B;
    int sum[MAX];
    scanf("%d",&T);
    
    for(int i = 0;i<T;i++){
        scanf("%d %d",&A,&B);
        sum[i] = A+B;
    }
    for(int i = 0;i<T;i++){
        printf("%d\n",sum[i]);
    }
    return 0;
}
*/
