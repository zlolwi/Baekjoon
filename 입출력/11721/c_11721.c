// 메모리:1112KB, 코드 길이: 210B
#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++){
        printf("%c",a[i]);
        if(i%10==9) printf("\n");
    }
    
    return 0;
}
