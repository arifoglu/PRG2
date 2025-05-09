#include <stdio.h>
/*
-> "r+" => okuma + yazma (silmeden)
-> dosya var olmali,yoksa hata verir
-> icerik silinmez
-> imlec nerdeyse oraya yazar
*/
int main() {
    FILE *fichier;
    fichier = fopen("z1.txt","r+");
    if(fichier == NULL){
        printf("fichier n'a pas ouvert!");
        return 1;
    }

    // dosya okuma icin
    char buffer[100];
    while(fgets(buffer, sizeof(buffer), fichier) != NULL){
        printf("%s",buffer);
    }

    // dosya icerigini basa alip ,uzerine yazma
    rewind(fichier);

    // fputs()
    fputs("This line is new\n",fichier);

    // fprintf()
    fprintf(fichier,"This line is newest");

    fclose(fichier);
    
    return 0;
}