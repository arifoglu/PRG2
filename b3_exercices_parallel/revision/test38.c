#include <stdio.h>

int main() {
    FILE *fsource, *fdestination;
    fsource = fopen("z1.txt","r");
    if(fsource == NULL){
        return 1;
    }

    fdestination = fopen("z2.txt","w");
    if(fdestination == NULL){
        return 1;
    }

    /* 
     #Caracter Caracter islem 
        fgetc() ile kaynak dosyadan 1 caracter okunur.
        fputc() ile hedef  dosyaya  1 caracter yazilir.
    */
    int c;
    while((c = fgetc(fsource)) != EOF){
        fputc(c,fdestination);
    }

    fclose(fsource);
    fclose(fdestination);
    
    return 0;
}