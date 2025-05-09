#include <stdio.h>

#define MYFILE "z1.txt"

int main() {
    FILE *fichier;
    fichier = fopen(MYFILE,"r");
    if(fichier == NULL){
        printf("fichier n'a pas ouvert!");
        return 1;
    }
    char text[100];
    while(fgets(text, sizeof(text), fichier) != NULL){
        printf("%s",text);
    }

    fclose(fichier);
    return 0;
}