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
    #Satir Satir islem
        fgets() ile kaynak dosyadan satir satir okunur.
        fputs() ile hedef  dosyaya  satir satir yazilir.
    */
    char buffer[100];
    while(fgets(buffer,sizeof(buffer),fsource) != NULL){
        fprintf(fdestination,"%s",buffer);
    }
    
    fclose(fsource);
    fclose(fdestination);
    
    return 0;
}