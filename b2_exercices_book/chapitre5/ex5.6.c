#include <stdio.h>

int main() {
    int a, b;
    printf("a : ");scanf("%d",&a);while(getchar() != '\n');
    printf("b : ");scanf("%d",&b);while(getchar() != '\n');

    if((a + b) % 2 == 0){
        printf("%d + %d est paire\n",a,b);
    }
    if((a * b) % 2 == 0){
        printf("%d * %d est paire\n",a,b);
    }
    if((a + b) > 0){
        printf("%d + %d > 0 \n",a,b);
    }else if(a + b < 0 ){
        printf("%d + %d < 0 \n",a,b);
    }else {
        printf("%d + %d = 0 \n",a,b);
    }
    return 0;
}