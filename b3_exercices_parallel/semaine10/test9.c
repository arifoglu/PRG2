#include <stdio.h>
/*
#if defined => burda karsilastirma yapip,sonraki 
#elif => bu yapi ile herbir MACRO yu kontrol etmeye yarar. 
*/
#define MACRO_1  1
#define MACRO_2  1

int main() {
    #if defined(MACRO_1) && defined(MACRO_2)
        printf("Both MACRO_1 and MACRO_2 are defined!\n");
    #elif defined(MACRO_1)
        printf("Only MACRO_1 is defined!\n");
    #elif defined(MACRO_2)
        printf("Only MACRO_2 is defined!\n");
    #else
        printf("Neither MACRO_1 nor MACRO_2 is defined!\n");
    #endif

    
}