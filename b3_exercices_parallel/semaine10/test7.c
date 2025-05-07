#include <stdio.h>

#define DEBUG   1
#define FOO     1

#if VERBOSE

void display_log(void){
    printf("Detailed log\n"); 
}

#else
void display_log(void){
    printf("Simple log\n"); 
}
#endif

int main() {
    #if DEBUG && VERBOSE
        display_log();
    #elif FOO
         display_log();
    #else
        printf("No log\n");
    #endif 
    
}