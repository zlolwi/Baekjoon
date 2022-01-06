#include <stdio.h>
// 메모리 크기: 1112KB, 코드 길이: 191B
int main() {
    int A,B;
    while(scanf("%d %d",&A,&B)!=EOF){
        if((A==0)&&(B==0)){
            break;
        }
        printf("%d\n",A+B);
    }

    return 0;
}
