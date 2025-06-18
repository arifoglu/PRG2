#include <stdio.h>

int main() {
    /*
    -> "w" sadece yazma icin kullanilir. 
    ->  dosya yoksa ,olusturur,
    ->  dosya varsa dosya icerigini siler(ecrasement)  
    */
    FILE *fichier;
    fichier = fopen("z1.txt","w");
    if(fichier == NULL){
        printf("le fichier n'as pas creé");
        return 1;
    }
    fprintf(fichier,"Hello world");
    
    fclose(fichier);

    
    return 0;
}