#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){
    //EX1
    //Komut satırından girilen ilk argümanı ekrana yazdıran bir program yaz.
    // printf("First argument : %s\n",argv[1]);

    //EX2
    /*
    // Komut satırından girilen iki sayısal argümanı al ve toplamını hesaplayıp
    ekrana yazdır.
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    printf("%d + %d = %d\n", num1, num2, num1+num2);
    */

    
    //EX3
    /*
    //Komut satırından girilen bir kelimeyi (örneğin "hello") büyük harflere çevir ve ekrana yazdı
    
    char argument[10];
    strcpy(argument,argv[1]);
    for(size_t i = 0; i < strlen(argument);++i){
        argument[i] = toupper(argument[i]);
    }
    printf("%s\n",argument);

    */

    // EX3
    /*
    // Komut satırından verilen bir kelimenin uzunluğunu (karakter sayısını) ekrana yazdıran bir program

    char argument[20];
    strcpy(argument,argv[1]);
    printf("length : %lu\n",strlen(argument));
    */


    // EX4
    /*
    //Komut satırından verilen iki string’i birleştirip ekrana yazdır

    char argument1[20], argument2[20];
    strcpy(argument1,argv[1]);
    strcpy(argument2,argv[2]);
    strcat(argument1,argument2);
    printf("%s\n",argument1);
    
    */


    return 0;
}