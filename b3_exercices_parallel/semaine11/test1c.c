#include <stdio.h>

/*
-> w+ => yazma + okuma
-> dosya yoksa olustur,dosya varsa icerik silinir(ecrasement)
*/
int main() {
    FILE *fichier;
    fichier = fopen("z1.txt","w+");
    if(fichier == NULL){
        printf("fichier n'a pas ouvet!\n");
        return 1;
    }

    fputs("Hello\n",fichier); // yazma 

    rewind(fichier);          // basa don

    char buffer[100];
    while(fgets(buffer, sizeof(buffer) ,fichier) != NULL){
        printf("%s",buffer);
    }
    fclose(fichier);
    return 0;
}