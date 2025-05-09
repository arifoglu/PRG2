#include <stdio.h>
/*
-> "w" sadece yazma icin kullanilir. 
->  dosya yoksa ,olusturur,
->  dosya varsa dosya icerigini siler(ecrasement)  
*/
int main() {
    // Dosya ismi belirlenir  => FILE *dosya
    FILE *fichier;
    
    // yapilacak format => fopen("dosya adi","w")              
    fichier = fopen("z1.txt","w");

    // herseferinde kontrol gerekir
    if(fichier == NULL){
        printf("fichier n'a pas creé");
        return 1;
    }
    // istenen dosyaya yazim => fprintf(dosya,icerik)
    fprintf(fichier,"Hello ,world!");

    fclose(fichier);

    return 0;
}