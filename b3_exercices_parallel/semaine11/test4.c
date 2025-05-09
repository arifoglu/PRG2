#include <stdio.h>

int main() {
    FILE *fsource, *fdestination;
    int c;

    fsource = fopen("z1.txt","r");
    if(fsource == NULL){
        printf("fichier n'as pas ouvert!\n");
        return 1;
    }
    
    fdestination  = fopen("z2.txt","w");
    if(fdestination == NULL){
        printf("fichier n'as pas ouvert!\n");
        return 1;
    }
    /* 
     #Caracter Caracter islem 
        fgetc() ile kaynak dosyadan 1 caracter okunur.
        fputc() ile hedef  dosyaya  1 caracter yazilir.
    */

    // -> fgetc(fichiersource) => dosyadan 1 caracter okur 
    while((c = fgetc(fsource)) != EOF){
    // -> fputc(fichierdestination) => belirtilen caracteri dosyaya yazar. 
        fputc(c,fdestination);
    }

    fclose(fsource);
    fclose(fdestination);

    return 0;
}