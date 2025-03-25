#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int sum(int count, ...);

int main () {
    printf("total %d",sum(2,"hello","world"));

    return 0;
}
int sum(int count,...){
    va_list args;
    va_start(args,count);
    int total = 0;
    for(size_t i = 0; i < count;++i){
        const char* str = va_arg(args,const char*);
        total += strlen(str);
    }

    return total;
}
