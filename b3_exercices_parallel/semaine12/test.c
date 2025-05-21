#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main() {
    FILE *fichier;
    fichier = fopen("test.txt","r");
    if(fichier == NULL){
        printf("Error %d",errno);
        perror("Error ");
    }else{
        printf("FIle opened successfully");
    }
        fclose(fichier);

    return 0;
}