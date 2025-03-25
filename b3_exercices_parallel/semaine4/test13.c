#include <stdio.h>
#include <stdarg.h>

int sq(int count, ...);

int main () {
    printf("total square of %d + %d + %d = %d\n",2,3,4,sq(3,2,3,4));

    return 0;
}

int sq(int count, ...){
    va_list args;
    va_start(args,count);
    int total = 0;

    for(int i = 0; i < count ;++i){
        int num = va_arg(args,int) * va_arg(args,int); 
        total = num * num;
    }

    va_end(args);
    return total;
}