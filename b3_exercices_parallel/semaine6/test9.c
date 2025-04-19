#include <stdio.h>
#include <stdlib.h>

int main(){
    // strto* fonksiyonları bir string’i sayıya çevirmek için kullanılır.

    // strtol
    char str[] = "1234";
    long val = strtol(str,NULL,10);
    printf("strtol : %ld\n",val);
    
    // strtul
    char str2[] = "4294967295";
    unsigned long val2 = strtoul(str2, NULL, 10);
    printf("strtoul : %lu\n",val2);

    // strtof
    char str3[] = "3.14";
    float val3 = strtof(str3, NULL);
    printf("strtof: %f\n", val3);

    // strtod
    char str4[] = "2.71828";
    double val4 = strtod(str4, NULL);
    printf("strtod: %lf\n", val4);
    
    // strtold
    char str5[] = "1.6180339887";
    long double val5 = strtold(str5, NULL);
    printf("strtold: %Lf\n", val5); 

    ///////////////////// EXAMPLES
    char strx[] = "1234.567abc";
    char *end;
    double d = strtod(strx,&end); 
    printf("Int : %f\n",d);
    printf("string : %s\n",end);

    
    return 0;
}