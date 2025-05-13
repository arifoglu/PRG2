#include <stdio.h>

#define BLOCK_LENGTH 100

int main() {
    char str[BLOCK_LENGTH];
    int c, len;
    FILE *fsrc, *fdst;

    // dosya binary okuma modunda "rb" acilir
    fsrc = fopen("z1.txt","rb");
    if(fsrc == NULL){
        printf("Le fichier n'as pas ouvert\n");
        return 1;
    }

    // dosya binary yazma modunda "wb" yazilir
    fdst = fopen("z1bin.txt","wb");
    if(fdst == NULL){
        printf("Le fichier n'as pas ouvert\n");
        return 1;
    }

    // byte byte kopyalama yapar
    /*
    while((c = fgetc(fsrc)) != EOF){
        fputc(c,fdst);
    }
    */
    
    /*
    fread(str          ,   1                ,     BLOCK_LENGTH     ,     fsrc)
         hedef adres   ,   herbirim boyutu  ,     okuncak birim    , okuncak hedef adres
    */
    // blok halinde kopyalama yapar
    while((len = fread(str, 1, BLOCK_LENGTH, fsrc)) > 0) {
        fwrite(str, 1, len, fdst);
    }
    
    fclose(fsrc);
    fclose(fdst);

    return 0;
}