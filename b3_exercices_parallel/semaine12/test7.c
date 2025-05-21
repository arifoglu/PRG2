#include <stdio.h>
#include <setjmp.h>

jmp_buf ex_buf;

#define TRY do{if(setjmp(ex_buf) == 0){
#define CATCH }else{
#define END_TRY } } while(0)
#define THROW_EXCEPTION longjmp(ex_buf,1);


void risky_function(int x){
    if(x == 0){
        printf("error : division by zreo\n");
        THROW_EXCEPTION;
    }
    printf("result %f\n",1.0 / x);
}


int main() {
    TRY
    {
        printf("Trying...\n");
        risky_function(0);
        printf("This line will not be reached\n");
    }
    CATCH
    {
        printf("Caught an exception\n");
    }
    END_TRY;
    
    return 0;
}