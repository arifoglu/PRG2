#include <stdio.h>

/*
-> "a+" => okuma ve yazma
-> dosya yoksa olusturur
-> sadece sona yazma yapar
*/

int main() {
    FILE *fichier;
    fichier = fopen("z1.txt","a+");
    if(fichier == NULL){
        printf("fichier n'a pas ouvert!\n");
        return 1;
    }

    // okuma

    char buffer[100];

    // imlec basa gider
    rewind(fichier);

    // dosyadan okuma
    while(fgets(buffer, sizeof(buffer), fichier) != NULL){
        printf("%s",buffer);
    }
    
    // ekleme

    fputs("this is last line\n",fichier);

    fprintf(fichier,"this is last one");

    fclose(fichier);
    
    return 0;
}