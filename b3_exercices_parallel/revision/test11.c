#include <stdio.h>
#include <stdarg.h>

double moyenne(int count, ...){
    double total = 0;
    va_list args;
    va_start(args,count);

    for(int i = 0; i < count;++i){
        total += va_arg(args,double);
    }
    return total / count;
}


int main () {
    printf("Moyenne de 3 notes %d \n",moyenne(3,3.5,4.5,4.0));
    
    return 0;
}
