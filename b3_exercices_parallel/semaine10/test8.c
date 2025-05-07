#include <stdio.h>
/*
#if defined => bu yapi ile MACRO larin tanimli olup olmadigini kontrol edebiliriz; 
*/
#define MACRO_1  1

int main() {
    #if defined(MACRO_1)
        printf("MACRO_1 is defined\n");
    #else 
        printf("MACRO_1 is not defined\n");
    #endif

}