#include <stdio.h>

#define MAX 100

int main() {
    FILE *fsource, *fdestination;
    int c;

    fsource = fopen("z1.txt","r");
    if(fsource == NULL){
        printf("fichier n'as pas ouvert!\n");
        return 1;
    }
    
    fdestination  = fopen("z3.txt","w");
    if(fdestination == NULL){
        printf("fichier n'as pas ouvert!\n");
        return 1;
    }
    /*
    #Satir Satir islem
        fgets() ile kaynak dosyadan satir satir okunur.
        fputs() ile hedef  dosyaya  satir satir yazilir.
    */
    char line[MAX];    
    while(fgets(line,MAX,fsource) != NULL){
        fputs(line,fdestination);
    }

    fclose(fsource);
    fclose(fdestination);

    return 0;
}