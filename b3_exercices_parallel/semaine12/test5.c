#include <stdio.h>
#include <setjmp.h>

int setjmp(jmp_buf env);

void longjmp(jmp_buf env,int val);

jmp_buf buffer;


void second(){
    printf("Function second() is called\n");
    longjmp(buffer,1);
}

void first(){
    printf("Function first() is called\n");
    second();
    printf("This line will never be executed\n");
}


int main() {
    if(setjmp(buffer) == 0){
        printf("setjmp() returned 0 \n");
        first();
    }else{
        printf("setjmp() returned nonzero \n");
    }
    
    return 0;
}