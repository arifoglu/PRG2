#include <stdio.h>

int main() {
    /*
    -> "a+" => okuma ve yazma
    -> dosya yoksa olusturur
    -> sadece sona yazma yapar
    */
    FILE *fichier;
    fichier = fopen("z1.txt","a+");
    if(fichier == NULL){
        return 1;
    }

    rewind(fichier);// onemli imlec basa gider

    char buffer[100];
    while(fgets(buffer, sizeof(buffer),fichier) != NULL){
        printf("%s",buffer);
    }

    fprintf(fichier,"this is extra line");

    fclose(fichier);


    
    return 0;
}