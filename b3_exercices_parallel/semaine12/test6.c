#include <stdio.h>
#include <setjmp.h>

jmp_buf buffer;

void divide(int x, int y){
    if(y == 0){
        printf("Division by zero error\n");
        longjmp(buffer,1);
    }
    printf("result : %d\n",x / y);
}

int main() {
    int num, denum;
    if(setjmp(buffer) == 0){
        printf("num:");
        scanf("%d",&num);
        printf("denum:");
        scanf("%d",&denum);
        divide(num,denum);
    }else{
        printf("Exception handled in main()\n");
    }
    
    return 0;
}