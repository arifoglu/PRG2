#include <stdio.h>
#include <string.h>
#include <math.h>

int binary_to_decimal(const char binary[]);

int main() {
    char binary[32];
    printf("Entrez un nombre binaire : ");
    scanf("%s",binary);

    int decimal = binary_to_decimal(binary);
    printf("Le nombre en base de : %d\n",decimal);
    return 0;
}

int binary_to_decimal(const char binary[]){
    int decimal = 0;
    int length = strlen(binary);
    for(int i = 0; i < length;++i){
        if(binary[i] == '1'){
            decimal += 1 << (length - 1 -i);
        }
    }
    return decimal;
}



