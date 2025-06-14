#include <stdio.h>
#include <stdlib.h>

// caracter caracter yazar string 
void affiche(char str[]){
    int i = 0;
    while(str[i] != 0){
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}

int main (int argc, char *argv[]) {

    return EXIT_SUCCESS;
}
