#include <stdio.h>

// dosya adi #define ile kulanilabilir.
#define MYFILE "z1.txt"

int main() {
    FILE *fichier;
    fichier = fopen(MYFILE,"w");
    if(MYFILE == NULL){
        printf("Fichier n'a pas ouvert!\n");
        return 1;
    }

    fprintf(fichier,"SALUT");

    fclose(fichier);

    return 0;
}