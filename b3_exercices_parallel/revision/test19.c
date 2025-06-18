#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

bool isInteger(const char *str){
    if(*str == '-' || *str == '+'){
        str++;
    } 
    if(*str == '\0')return false;

    while(isdigit(unsigned char)*str)str++;

    return *str == '\0';
}


int main(int argc, char *argv[]) {    
    if(argc != 3 || isInteger(argv[1]) || isInteger(argv[2])){
        printf("Usage %s ",argv[0]);
        return EXIT_FAILURE;
    }

    long long a b, mult;


    return 0;
}

