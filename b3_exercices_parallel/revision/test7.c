#include <stdio.h>
#include <stdlib.h>


int main () {
    // Array tanimlama
    int t5[5];                   // 5 elemanli
    int t1[4] = {1,2,3,4};       // 4 elemanli
    int t2[]  = {1,2,3,4};       // compiler tespit eder boyutu
    int t3[]  = {1,2};           // son 2 deger 0 olur,=> 1,2,0,0
    int t4[]  = {0};             // hepsi 0            => 0,0,0,0
     
    // 
    int vector[4] = {1,2,3,4};
    int *ptr;
    ptr = vector;                   // tablonun kendisi bir pointer
    printf("%p\n",ptr);             // tablonun pointer  => 3 ude ayni 
    printf("%p\n",vector);          // tablonun  adresi
    printf("%p\n",&vector[0]);      // tablonun ilk eleaminin adresi
    printf("%d\n",*ptr);
    printf("%d\n",*(ptr+1));
    printf("%d\n",vector[1]);

    return EXIT_SUCCESS;
}
