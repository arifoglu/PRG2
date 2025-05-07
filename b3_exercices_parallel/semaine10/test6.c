#include <stdio.h>

#define NR_ITEMS 100

#ifdef VERBOSE

#define DEBUG
//#define VERBOSE
void display_log(void){
    printf("Detailed log\n"); 
}
#else  
void display_log(void){
    printf("simple log\n"); 
}

#endif 

int main() {
    int tab[NR_ITEMS];

    #ifdef DEBUG
        display_log();
    #endif 
}