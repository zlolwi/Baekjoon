// 메모리: 1112KB, 코드 길이: 202B
#include <stdio.h>

int main() {
    int T,A,B;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        scanf("%d %d",&A,&B);
        printf("Case #%d: %d + %d = %d\n",i,A,B,(A+B));
    }
    return 0;
}
