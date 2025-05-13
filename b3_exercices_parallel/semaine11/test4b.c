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
    fgets() , fprintf()
    fprintf() => %s yazmak format belirtmek gerekir.
    */
   char buffer[100];
   while(fgets(buffer, sizeof(buffer), fsource) != NULL){
       fprintf(fdestination,"%s",buffer);
   }

    fclose(fsource);
    fclose(fdestination);

    return 0;
}