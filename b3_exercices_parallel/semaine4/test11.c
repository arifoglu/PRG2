#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...);

int main () {
    printf("3 numbers sum : %d\n",sum(3,4,5,6));
    printf("4 numbers sum : %d\n",sum(4,4,5,6,7));
    printf("2 numbers sum : %d\n",sum(2,4,8));

    return 0;
}
int sum(int count, ...){
    int total = 0;
    va_list args;
    va_start(args,count);

    for(int i = 0; i <count ;++i){
        total += va_arg(args,int);
    }
    va_end(args);
    return total;
}